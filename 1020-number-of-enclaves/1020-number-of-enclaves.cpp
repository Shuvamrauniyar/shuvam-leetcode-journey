class Solution {
public:
    void dfs(int r,int c,vector<vector<int>>& grid,vector<vector<int>>& vis,int drow[],int dcol[])
    {
            int n=grid.size();
        int m=grid[0].size();
        vis[r][c]=1;
       for(int i=0;i<4;i++)
       {

       int row=r+drow[i];
           int col=c+dcol[i];
           if(row>=0&&row<n&&col>=0&&col<m&&!vis[row][col]&&grid[row][col]==1){
               vis[row][col]=1;
               dfs(row,col,grid,vis,drow,dcol);
       }
       }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        int drow[]={-1,0,1,0};
        int dcol[]={0,-1,0,1};
        for(int i=0;i<m;i++)
        {
            
            if(!vis[0][i] &&grid[0][i]==1)
            {
                vis[0][i]=1;
                dfs(0,i,grid,vis,drow,dcol);
            }
            if(!vis[n-1][i] &&grid[n-1][i]==1)
            {
                vis[n-1][i]=1;
                dfs(n-1,i,grid,vis,drow,dcol);
            }
        }
            for(int i=0;i<n;i++)
        {
            
            if(!vis[i][0] &&grid[i][0]==1)
            {
                vis[i][0]=1;
                dfs(i,0,grid,vis,drow,dcol);
            }
            if(!vis[i][m-1] &&grid[i][m-1]==1)
            {
                vis[i][m-1]=1;
                dfs(i,m-1,grid,vis,drow,dcol);
            }
        }
        int count=0;
        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<m-1;j++)
            {
                if(!vis[i][j]&&grid[i][j]==1)
                    count++;
            }
        }
        return count;
    }
};