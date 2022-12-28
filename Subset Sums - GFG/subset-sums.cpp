//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
    
    //here subset is covers subsequences,see testcase [5,2,1], we have 5+1=6 in the ans
    //in this why only subsequemce approach pick ,not pick technique work bcz we have to find sum
    // and [1,2,3] or [3,2,1] have same sum thats why we dont bother to find subset as [3,2,1]
    //but if we are told to print all the subset then another approach should be applied ,that you 
    //can see in subset II problem
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