//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  
  int atmost_kchar_string(string s,int k)
  {
          unordered_map<char,int>m;
      int left = 0 , maxlen = -1, count =0;
      
      for(int right = 0; right < s.size() ; right++)
      {
          m[s[right]]++;
          
          while(m.size() > k)
          {
              m[s[left]]--;
              if(m[s[left]] == 0)
              m.erase(s[left]);
              
              left++;
              
          }
          count = right - left+1;
          if(m.size() == k)
          maxlen = max(maxlen,count);
      }
     return maxlen;
  }
    int longestKSubstr(string s, int k) {
    // your code here
    return atmost_kchar_string(s,k) ;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends