//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
bool find(int i,vector<int>arr, int sum,int target,vector<vector<int>>&dp)
{
    if(i<0||sum==target)
    {
        return sum==target;
    }
    if(dp[i][sum]!=-1)
    return dp[i][sum];
    bool pick=0;
    if(arr[i]<=target)
    pick=find(i-1,arr,sum+arr[i],target,dp);
    bool notpick =find(i-1,arr,sum,target,dp);
    return dp[i][sum]=(pick||notpick);
}
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return find(arr.size()-1,arr,0,sum,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends