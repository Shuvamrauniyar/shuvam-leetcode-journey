//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    
    bool isPossible(int n, int k ,vector<int>& stalls,int mid)
    {
        int count = 1;
        int prev = stalls[0];
        for(auto curr : stalls)
        {
            if((curr - prev) >= mid)
            {
                prev = curr;
                count++;
            }
        }
        if(count >= k)
        return true;
        
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
    
       int low = 1;
       int high = *max_element(stalls.begin(),stalls.end());
       sort(stalls.begin(),stalls.end());
       int ans =-1;
       while(low <= high)
       {
           int mid = (high - low)/2 + low;
           
           if(isPossible(n,k,stalls,mid))
           {
               ans = mid;
               low = mid+1;
           }
           else
           high  = mid - 1;
       }
        // Write your code here
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends