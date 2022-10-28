class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int n=mat.size();
        int m=mat[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>dis(n,vector<int>(m));
        int vis[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
                else
                    vis[i][j]=0;
            
            }
        }
        //q.push({0,0});
        int drow[]={-1,0,1,0};
        int dcol[]={0,-1,0,1};
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int step=q.front().second;
            dis[r][c]=step;
            q.pop();
            if(mat[r][c]==0)
                dis[r][c]=0;
            for(int i=0;i<4;i++)
            {
                int row=r+drow[i];
                int col=c+dcol[i];
                
                if(row>=0&&row<n&&col>=0&&col<m&&vis[row][col]==0)
                {
                    q.push({{row,col},step+1});
                    vis[row][col]=1;
                }
            }
            
        }
        return dis;
    }
};