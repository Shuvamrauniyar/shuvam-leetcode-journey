//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    vector<int> replaceWithRank(vector<int> &arr, int N){
   
   //max heap will not work as we need to find the first occurence rank in ascending 
   //order so max heap will give last occurence rank 
   priority_queue<int,vector<int>,greater<int>>pq(arr.begin(),arr.end()); 
   unordered_map<int,int>m;
   int ind=1;
   while(!pq.empty())
   {
       if(m[pq.top()]==0) //this line very important ,check the first occurence 
       m[pq.top()]=ind++;
       pq.pop();
   }
   vector<int>ans(N);
   for(int i=0;i<N;i++)
   {
       ans[i]=m[arr[i]];
   }
   return ans;
   

    }

};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        vector<int> ans = obj.replaceWithRank(vec,n);
        for(int i = 0;i<n;i++) cout << ans[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends