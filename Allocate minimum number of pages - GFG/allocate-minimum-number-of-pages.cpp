//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    
    bool isallocatable(int a[],int n,int m,int mid)
    {
        int student = 1;
        int pagesum = 0;
        for(int i=0; i<n ; i++)
        {
            pagesum+=a[i];
            if(pagesum > mid)
            {
                pagesum = a[i];
                student++;
            }
        }
        if(student > m)
        return false;
        return true;
        
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code 
        if(N < M)
        return -1;
        int low = *max_element(A, A+N);
        int high = accumulate(A,A+N,0);
        int totalpages = high;
        int ans = -1;
        //while(low <= high)
        while(low < high)
        {
            int mid = (high - low)/2 + low;
            
            if(isallocatable(A,N,M,mid))
            {
              //  ans = mid;
              //  high =mid-1;
                high = mid;
            }
            else
            low = mid+1;
            
        }
       //return isallocatable(A,N,M,high) ? high : -1;
       return  high ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends