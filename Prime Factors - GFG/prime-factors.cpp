//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    vector<int>ans;
	    for(int i=2;i<=N;i++)
	    {
	        if(N%i==0)
	        {
	            bool prime=true;
	            for(int j=2;j<=i/2;j++)
	            {
	                if(i%j==0){
	                prime=false;
	               break;
	                    
	                }
	            }
	            if(prime)
	            ans.push_back(i);
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends