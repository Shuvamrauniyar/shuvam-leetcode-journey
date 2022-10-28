class Solution {
public:
    bool dfs(int node,vector<vector<int>>& graph,vector<int>&vis,bool color)
    {
        if(color)
        vis[node]=1;
        else
            vis[node]=2;
        int n=graph.size();
        for(int i=0;i<graph[node].size();i++)
        {
            if(!vis[graph[node][i]]){
               if( !dfs(graph[node][i],graph,vis,!color))
                   return false;
            }
            else if(vis[node]==vis[graph[node][i]])
                return false;
                
                
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        
        vector<int>vis(n,0);
        bool color=1;
     
        for(int i=0;i<n;i++)
        {
            if(!vis[i]){
               if( !dfs(i,graph,vis,color))
                   return false;
                
            }
                
        }
        return true;
        
    }
};