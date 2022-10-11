//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int n)
    {
        // code here
        vector<int>ans;
        vector<int>arr{1,2,5,10,20,50,100,200,500,2000};
        int count=0;
        
        while(n){
       auto x=lower_bound(arr.begin(),arr.end(),n);
        if(arr[x-arr.begin()]!=n){
       ans.push_back(arr[x-1-arr.begin()]);
       n-=arr[x-1-arr.begin()];}
       else
      { ans.push_back(arr[x-arr.begin()]);
       n-=arr[x-arr.begin()];}
        }
       
        
       return ans; 
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends