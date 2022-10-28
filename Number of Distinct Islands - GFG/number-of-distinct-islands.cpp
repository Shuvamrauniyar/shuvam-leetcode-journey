//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  void dfs(int row,int col,int row0,int col0, vector<vector<int>>&vis,vector<vector<int>>& grid,vector<pair<int,int>>&v)
  {
      vis[row][col]=1;
      v.push_back({row-row0,col-col0});
      int drow[]={-1,0,1,0};
      int dcol[]={0,-1,0,1};
      int n=grid.size();
      int m=grid[0].size();
      for(int i=0;i<4;i++)
      {
          int r=row+drow[i];
          int c=col+dcol[i];
          
          if(r>=0&&r<n&&c>=0&&c<m&&!vis[r][c]&&grid[r][c]==1)
          {
              dfs(r,c,row0,col0,vis,grid,v);
          }
      }
  }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size(); 
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>>s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                //vector<pair<int,int>>v; declaring here will givve error
                vector<pair<int,int>>v;
                if(!vis[i][j]&&grid[i][j]==1){
                dfs(i,j,i,j,vis,grid,v);
                s.insert(v);
                }
                //s.insert(v);declaring outside if condn,will give error
                //why? bcz if the if condn will not be true and we have declare the 
                //vector outside of if condn then we will have empty vector so empty vector will be pushback tp set s ,
                //so this increase the unnessecary size of set reulting to diffrent output
                //among v and s ,declare anyone of them or both inside the if condn
            }
        }
        // int count=0;
        // for(auto i:s)
        // {
        //     for(auto j:i)
        //     cout<<j.first<<" "<<j.second<<" ";
        //     cout<<endl;
        //     count++;
        //     cout<<"count ="<<count<<endl;
        // }
        return s.size();
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends