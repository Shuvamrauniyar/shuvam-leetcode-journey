//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int l1=arr[0];
	    int l2=-1;
	    int prev;
	    for(int i=0;i<n;i++)
	    {
	        //prev=l1;
	        if(arr[i]>l1){
	            l2=l1;
	        l1=arr[i];
	        }
	        else if(arr[i]>l2 && arr[i]<l1)
	             l2=arr[i];
	    }
	  if(l2==l1)return -1;
	    return l2;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends