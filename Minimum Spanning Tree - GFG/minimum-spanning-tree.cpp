//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class disjoint
{
    public:
         //vector<int> parent(V+1); dont define size here as this is in another class disjoint
         //actual size is passed from solution class
         vector<int> parent;
          vector<int> size;
    disjoint(int V)
    {
        parent.resize(V+1);
        size.resize(V+1,1);
    for(int i=0;i<=V;i++)
     {
         parent[i]=i;
     }
    }
     
    int findulparent(int node)
    {
        if(node==parent[node])
        return node;
        return parent[node]=findulparent(parent[node]);
    }
   
    void unionbysize(int u,int v)
    {
        int uparent=findulparent(u);
        int vparent=findulparent(v);
        if(uparent!=vparent)
        {
            if(size[uparent]>size[vparent])
            {
                parent[vparent]=uparent;
                size[uparent]+=size[vparent];   
            }
            else
            {
                 parent[uparent]=vparent;
                size[vparent]+=size[uparent];   
            }
        }
    }
    
};
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
	//KRUSKALS ALGORITHM
	int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<pair<int,pair<int,int>>>v; //(weight,u,v)
        for(int i=0;i<V;i++)
        {
            for(auto j:adj[i])
            v.push_back({j[1],{i,j[0]}});
        }
        
        
        //for(int i=0;i<v.size();i++)
        disjoint d(V);
        sort(v.begin(),v.end());
        int mstwt=0;
        for(auto i:v)
        {
            int wt=i.first;
            int u=i.second.first;
            int v=i.second.second;
            
            //if(d.parent[u]!=d.parent[v])
            if(d.findulparent(u)!=d.findulparent(v))
            {
                mstwt+=wt;
                d.unionbysize(u,v);
            }
        }
        return mstwt;
    }

};
//PRIMS ALGORTHIM
/*
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int>vis(V,0);
        int edwt=0;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
       
       pq.push({0,0});
       while(!pq.empty())
       {
           auto it=pq.top();
           pq.pop();
           int wt=it.first;
           int node=it.second;
           if(vis[node])continue;
           edwt+=wt;
           vis[node]=1;// here i am not marking below as visited while pushing to pq
           //i am marking here only when i am popping it ,here popping means i am adding to minimum spanning tree
          for(auto i:adj[node]) 
           {
               int adjnode=i[0];
               int adjwt=i[1];
               if(!vis[adjnode])
               pq.push({adjwt,adjnode});
           }
       }
       return edwt;
    }
*/

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends