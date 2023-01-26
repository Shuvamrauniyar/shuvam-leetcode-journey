//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&v, int n)
    {   
        // Your code here
        unordered_map<int,int>m;
        int prefixSum =0;
        int maxlen = 0;
        // int totlen = accumulate(v.begin(),v.end(),0);
        
        // if(totlen == 0)
        // return v.size();
        
        for(int i = 0;i < v.size() ;i++)
        {
            prefixSum += v[i];
            
            if(prefixSum == 0)
            maxlen = i+1;
            else
            {
                
                if(m.find(prefixSum) != m.end())
                maxlen = max(maxlen,i-m[prefixSum]);
                else
                m[prefixSum] = i;
                
            }
        }
        return maxlen;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends