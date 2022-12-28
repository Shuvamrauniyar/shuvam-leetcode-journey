//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
    public:
    void findsubsetsums(int ind,vector<int>&arr,vector<int>&ds,int sum)
    {
        if(ind==arr.size()){
        ds.push_back(sum);
        return;
            
        }
        findsubsetsums(ind+1,arr,ds,sum);
        findsubsetsums(ind+1,arr,ds,sum+arr[ind]);
        
        
    }
    //findsubsetsums
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
       vector<int>ds;
       int sum=0;
       findsubsetsums(0,arr,ds,sum);
       return ds;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends