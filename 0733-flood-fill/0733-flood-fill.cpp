class Solution
{
    public:
        vector<vector < int>> floodFill(vector<vector < int>> &image, int sr, int sc, int color)
        {
            int n = image.size();
            int m = image[0].size();

            vector<vector < int>> vis;
            vis = image;
            queue<pair<int, int>> q;
            q.push({ sr,sc });
            vis[sr][sc]=color;
            int drow[]= { -1,0,1,0};
            int dcol[] = { 0,-1,0,1};
            while (!q.empty())
            {
                int r = q.front().first;
                int c = q.front().second;

                q.pop();
                for (int i = 0; i < 4; i++)
                {
                    int row = r + drow[i];
                    int col = c + dcol[i];
                    if (row >= 0 && row < n && col >= 0 && col < m && image[r][c] == image[row][col] && vis[row][col] != color)
                    {
                        vis[row][col] = color;
                        q.push({ row,col });
                    }
                }
            }

            return vis;
        }
};