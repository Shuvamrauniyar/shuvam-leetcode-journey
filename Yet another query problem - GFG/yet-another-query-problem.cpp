//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int n, int num, vector<int> &a, vector<vector<int>> &q) {
        // code here
        int prefixFreqSum = 0;
       map<int,int>m;
        vector<int>count(n);
        for(int i = n-1; i>=0 ;i--)//traversing from backward bcz we need freq from i to n-1
        {
            m[a[i]]++;
            count[i] = m[a[i]];
        }
       
     
        //Debugging
        //  for(auto i : m)
        // {
        //     vector<int>v = i.second;
        //     cout<<i.first<<"= ";
        //         for(int s : v)
        //         cout<<s<<" ";
        //         cout<<endl;
        // }
        vector<int>Vans;
        for(int i = 0; i < q.size(); i++)
        {
            int l = q[i][0];
            int r = q[i][1];
            int k = q[i][2];
            int ans = 0;
            for(int j = l; j <= r ; j++)
            {
                //vector<int>v = m[a[j]];
                
                //int cnt = v[n-1] - v[j] + 1;
                
                if(count[j] == k)
                ans++;
            }
            Vans.push_back(ans);
        }
       // cout<<endl;
        return Vans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends