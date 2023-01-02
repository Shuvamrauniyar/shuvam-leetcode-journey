//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        //note this can be solved with sliding window protocol as discussed by aditya verma bhaiya
        //but only works with positive numbers array
        //now to deal with negative numbers as well  , we will use hashmap and prefix sum techniques
        
        int maxlength=0;
        int i=0 , sum=0;
        unordered_map<int,int>m;
        int prefix[N];
        for( int j=0;j<N;j++)
        {
            sum+=A[j];
            prefix[j]=sum;
            
            if(prefix[j] == K)
             maxlength = max(maxlength , j+1);
             
            if(m.find(prefix[j]-K) != m.end())
            {
                maxlength = max(maxlength , j-m[prefix[j] - K]);
             //   cout<<j<<" "<<m[prefix[j] - K]<<endl;;
             //cout<<prefix[j]<<endl;
                
            }
                          //N=17 K=15 
             if(m.find(prefix[j]) == m.end())  //-13 0 6 15 16 2 15 -12 17 -16 0 -3 19 -3 2 -9 -6
               m[prefix[j]]=j;
            
        }
        
        
        return maxlength;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends