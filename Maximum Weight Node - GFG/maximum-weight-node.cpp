//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      // code here
      vector<int>wt(N,0);
      
      for(int i=0 ;i < Edge.size(); i++)
      {
          if(Edge[i] != -1)
           wt[Edge[i]] += i;
      }
      int maxi = wt[0];
      int maxi_idx = 0;
      for(int i = 1; i < wt.size() ; i++)
      {
          if(maxi < wt[i])
          {
              maxi = wt[i];
              maxi_idx = i;
          }
          else if(maxi == wt[i])
          {
             // if(maxi_idx < i)
              maxi_idx = i;
          }
          
      }
      return maxi_idx;
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends