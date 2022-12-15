//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:



//this method will not work this is only for insertion case .

//   void heapify_up(int i,vector<int> &a, int n)
//   {
      
//       int parent=(i-1)/2;
      
//       if(i&& a[i]>a[parent])
//       {
//           swap(a[i],a[parent]);
//           heapify_up(parent,a,n);
          
//       }
      
      
//   }

//to maintain heapify property ,we need to use heapify down approach 
void heapifydown(int i,vector<int>&a,int n)
{
    int largest=i;
    int lc= 2*i+1;
    int rc= 2*i+2;
    
    if(lc<n&&a[lc]>a[largest])
    largest=lc;
    if(rc<n&&a[rc]>a[largest])
    largest=rc;
    
    if(largest!=i)
    {
        swap(a[largest],a[i]);
        heapifydown(largest,a,n);
    }
    
    
}
    void convertMinToMaxHeap(vector<int> &a, int n){
        for(int i=n/2-1;i>=0;i--)
    {
        heapifydown(i,a,n);
    }
    }
    
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        obj.convertMinToMaxHeap(vec,n);
        for(int i = 0;i<n;i++) cout << vec[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends