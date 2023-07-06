//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int binarySearch(int arr[], int n , int x,bool firstOccur ){
     int mid,low=0,high=n-1;
    int ansIdx= -1; 
 
      while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==x)
        {
            
            ansIdx=mid; //once x is found, saving it in answer.
            if(firstOccur == true)
            {
                high=mid-1; //main logic
            }
            else if(firstOccur == false)
            {
                low = mid+1;//once x is found, moving to right to find the last occurences 
            }
            
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
    return ansIdx;
}

vector<int> find(int arr[], int n , int x )
{
    // code here
    int idx1 = binarySearch(arr, n, x, true); //to find first occurence
    int idx2 = binarySearch(arr, n, x, false); //to find last occurence
    //cout<<idx1<<" "<<idx2<<endl;
    vector<int>ans;
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