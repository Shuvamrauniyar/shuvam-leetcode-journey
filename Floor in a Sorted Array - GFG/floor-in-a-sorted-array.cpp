//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        long long mid,low=0,high=n-1;
        int ans = -1;
        while(low<=high)
        {
            // if (x >= v[high]) this will not work for testcases like x = 7 and arr= [6,6,8,9] but here the questions states the array has no duplicates
            // return high;
            mid=(low+high)/2;
            if(v[mid]==x)return mid;
            else if(v[mid]>x)
            high=mid-1;
            else{
            ans = mid;
            low=mid+1;
            }
            
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends