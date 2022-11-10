//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool dfs(int j,int V,vector<int> adj[],int vis[],int pathvis[])
  {
      vis[j]=1;
        pathvis[j]=1;
      for(int i=0;i<adj[j].size();i++)
      {
         if(!vis[adj[j][i]]){
       
        if(dfs(adj[j][i],V,adj,vis,pathvis))
        return true;
       
         }
         else if(pathvis[adj[j][i]]==1)
         return true;
      }
       pathvis[j]=0;//backtrack ,this is done while returning from a path ,if you dont get cycle 
       //starting from a node then while returning make pathvis[j]=0 (intial state)
      return false;
  }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        // int vis[V]={0};
        // int pathvis[V]={0};
        // for(int i=0;i<V;i++)
        // {
        //     if(!vis[i])
        //     {
        //         if(dfs(i,V,adj,vis,pathvis))
        //         return true;
        //     }
        // }
        // return false;
        vector<int>indegree(V,0);
        for(int i=0;i<V;i++)
        {
            for(auto it:adj[i])
            indegree[it]++;
            
        }
        queue<int>q;
        for(int i=0;i<V;i++)
        {
            if(indegree[i]==0)
            q.push(i);
        }
        vector<int>topo;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node])
           { 
               indegree[it]--;
            if(indegree[it]==0)
            q.push(it);
               
           }
            
        }
        if(topo.size()!=V)
        return true;
        return false;
       
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends