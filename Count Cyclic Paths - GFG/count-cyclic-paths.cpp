//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:

    int countPaths(int n){
        int mod = 1e9+7;
      int hashh[n+1];
      hashh[1]=0;
      hashh[2]=3;
      long long x=3;
      for(int i=3;i<=n;i++)
      {
          x=(x*3)%mod;
          hashh[i]=(x-hashh[i-1]+mod)%mod;
      }
      return hashh[n];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends