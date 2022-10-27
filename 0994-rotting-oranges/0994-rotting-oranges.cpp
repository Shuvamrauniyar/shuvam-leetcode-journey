class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
       int n=grid.size();
        int m=grid[0].size();
        int vis[n][m];
        queue<pair<pair<int,int>,int>>q;
        int cntfresh=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                    vis[i][j]=2;
                   
                }
                else
                    vis[i][j]=0;
                if(grid[i][j]==1)
                     cntfresh++;
            }
        }
        int cnt=0;
        int drow[]={-1,0,1,0};
            int dcol[]={0,-1,0,1};
        int tm=0;
        while(!q.empty())
        {
            
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            q.pop();
            tm=max(tm,t);
            for(int i=0;i<4;i++)
            {
                int row=drow[i]+r;
                int col=dcol[i]+c;
                if(row>=0&&row<n&&col>=0&&col<m&& vis[row][col]!=2&&grid[row][col]==1)
                {
                   q.push({{row,col},t+1});
                    vis[row][col]=2;
                    cnt++;
                }
            }
        }
        if(cntfresh!=cnt)
            return -1;
        return tm;
        
    }
};