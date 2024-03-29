class Solution {
public:
    void dfs(int r,int c,vector<vector<char>>& board,vector<vector<int>>& vis,int drow[],int dcol[])
    {
        vis[r][c]=1;
         int n=board.size();
        int m=board[0].size();
        for(int i=0;i<4;i++){
        int row=r+drow[i];
            int col=c+dcol[i];
            if(row>=0 && row<n && col>=0 && col<m && vis[row][col]==0 && board[row][col]=='O')
            {
                vis[row][col]=1;
                dfs(row,col,board,vis,drow,dcol);
            }
    }
    }
    void solve(vector<vector<char>>& board) {
        
        int n=board.size();
        int m=board[0].size();
        int drow[]={-1,0,1,0};
        int dcol[]={0,-1,0,1};
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
        {
            if(!vis[0][i]&&board[0][i]=='O'){
                vis[0][i]=1;
                dfs(0,i,board,vis,drow,dcol);
            }
            
            if((!vis[n-1][i])&&board[n-1][i]=='O'){
                vis[n-1][i]=1;
                dfs(n-1,i,board,vis,drow,dcol);
            }
                
                
        }
        for(int i=0;i<n;i++)
        {
            if((!vis[i][0])&&board[i][0]=='O'){
                vis[i][0]=1;
                dfs(i,0,board,vis,drow,dcol);
            }
            
            if((!vis[i][m-1])&&board[i][m-1]=='O'){
                vis[i][m-1]=1;
                dfs(i,m-1,board,vis,drow,dcol);
            }      
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {

            if(!vis[i][j] && board[i][j]=='O')
            {
                
               board[i][j]='X';
            }
            }
        }
        return;
    }
};