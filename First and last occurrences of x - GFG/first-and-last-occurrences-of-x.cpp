//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int mid,low=0,high=n-1;
    int idx1=-1,idx2=-1;
    bool found=false;
    vector<int>ans;
      while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==x)
        {
            idx1=mid;
            high=mid-1; //main logic
        }
        else if(x>arr[mid])
        {
          
             low=mid+1;
           
        }
        else if(x<arr[mid])
        {
             high=mid-1;
        }
    }
    
     low=0,high=n-1;
  while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==x)
        {
            idx2=mid;
            low=mid+1; //once x is found, moving to right to find the last occurences 
        }
        else if(x>arr[mid])
        {
          
             low=mid+1;
           
        }
        else if(x<arr[mid])
        {
             high=mid-1;
        }
    }
        if(idx1!=-1 ||idx2!=-1){
           if(idx1!=-1 &&idx2!=-1){
            ans.push_back(idx1);
            ans.push_back(idx2);
            return ans;
           }
           else
           {
               ans.push_back(max(idx1,idx2));
               ans.push_back(max(idx1,idx2));
               return ans;
           }
        } 
        return {-1,-1};
    }


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends