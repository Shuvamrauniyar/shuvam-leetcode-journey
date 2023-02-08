//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        
        int ans_idx = -1;
        // code here 
        for(int col = 0;col < M[0].size(); col++)
        {
            int count0 = 0;
            for(int row = 0; row < M.size(); row++)
            {
                if(M[row][col] == 0)
                count0++;
            }
            if(count0 == 1 && ans_idx == -1)
            {
                ans_idx = col;
            }
            else if(count0 == 1)
            return -1;
          
        }
        if(ans_idx != -1)
        {
            for(int col = 0; col < M[0].size();col++)
            {
                if(M[ans_idx][col] == 1)
                return -1;
            }
        }
        
        return ans_idx;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends