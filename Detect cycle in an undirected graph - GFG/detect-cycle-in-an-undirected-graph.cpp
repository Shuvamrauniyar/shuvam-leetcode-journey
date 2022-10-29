//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  bool dfs(int i, vector<int> adj[],int vis[],int parent)
  {
      if(!vis[i])
      {
          vis[i]=1;
          for(auto j:adj[i]){
              if(!vis[j]){
                //  vis[j]=1;//this line will not satisfies all testcase ,note it and observe
            if(dfs(j,adj,vis,i))
            return true;
              }
             else if(j!=parent)
             return true;
          }
      }
      return false;
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        for(int i=0;i<V;i++)
        {
            int parent=-1;
           if(!vis[i]){
            if(dfs(i,adj,vis,parent))
            return true;
           }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends