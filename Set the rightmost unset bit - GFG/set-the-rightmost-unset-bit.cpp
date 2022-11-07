//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int setBit(int n)
    {
        // Write Your Code here
        // if(!(n&(n+1)))
        // return n;
        // return n|(n+1);
        if(n==0)return 1;
           if ((n & (n + 1)) == 0)   
        return n;
        int n1=~n;
       // cout<<n1<<" "<<(n1&(-n1));
        
        // if((n1&(-n1))==0)
        // return n;
        int pos=log2(n1&(-n1));
        n=n|(1<<pos);
        return n;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.setBit(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends