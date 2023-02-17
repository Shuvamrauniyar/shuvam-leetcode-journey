//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        // code 
        N = N - GeekNum.size();
        while(N--){
            long long  sum = 0;
            int k1 = K;
            for(int i = GeekNum.size()-1 ; i>=0 && (k1--) ;i--)
            {
                sum += GeekNum[i];
            }
            GeekNum.push_back(sum);
        }
        return GeekNum.back();
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends