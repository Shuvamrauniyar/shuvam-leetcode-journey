//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    
    
    bool isSafecolor(int node,int colors,bool graph[101][101],vector<int>&color,int m,int n)
    {
        for(int k=0;k<n;k++)
        {
            if(k!=node && graph[node][k] && color[k]==colors)
            return false;
        }
        return true;
    }
      bool dfs(int node,bool graph[101][101],vector<int>&color,int m,int n)
    {
        if(node==n)//means we have colored all the node
        return true;
        for(int i=1;i<=m;i++)
        {
            if(isSafecolor(node,i,graph,color,m,n))
            {
                color[node]=i;
                if(dfs(node+1,graph,color,m,n))
                return true;
            }
            color[node]=0;
            
        }
        return false;
    }
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        // int n=graph.size();
        
        vector<int>color(n,0);

               if(dfs(0,graph,color,m,n))
                   return true;

        return false;
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends