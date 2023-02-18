//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        // code here 
        int countOrg = 0;
        int longestAns = 0;
        int seqLen = 0;
        int i = 0;
        for(int j = 0 ; j < n;j++)
        {
            seqLen++;
            if(arr[j] == 'O')
            countOrg++;
            
            while(countOrg > m)
            {
                if(arr[i] == 'O')
                countOrg--;
                i++;
                seqLen--;
            }
            longestAns = max(seqLen, longestAns);
        }
        return longestAns;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends