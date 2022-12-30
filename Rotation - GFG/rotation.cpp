//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    //linear search for min element and return its index. eatch the editorial solution
	    /*
	    int mini=INT_MAX,idx=0;
	    for(int i=0;i<n;i++)
	    {
	       // mini=min(mini,arr[i])
	        if(mini>arr[i])
	        {
	            mini=arr[i];
	            idx=i;
	        }
	    }
	    return idx;
	   */
	   
	   //binary search //this is same as previously we have done in strivers sheet 
	   int low=0,high=n-1;
	   
	   while(low<=high)
	   {
	       if(arr[low] <= arr[high] ) //for already sorted array
	       return low; //return index 
	       
	       int mid= low +(high-low)/2 ; //to prevent overflow
	       if(arr[mid] > arr[high])
	       low=mid+1;
	       else
	       high=mid;
	   }
	   return low;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends