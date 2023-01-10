//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	   // if(m == 1)
	   // return 1;
	    for(int i=1;i<=m;i++)
	    {
	        int run = n;
	        int ans = 1;
	        while(run--)
	        ans*=i;
	        
	        if(ans == m)
	        return i;
	        else if(ans > m)
	        return -1;
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends