//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        // code here
        string dummy = "";
        int maxlen = 0;
        for(int i = 0; i < s.size() ;i++)
        {
            dummy += s[i];
        //   for ( int j = i+1 ; j < s.size() ; j++)
        //   {
              int end = dummy.length();
              if((i+end) <= s.size())
              {
                  //cout<<s.substr(i+1,end)<<endl;
              if(dummy == s.substr(i+1,end))
              {
                  maxlen = dummy.size();
              }
               
                   
             // }
          }
        }
        if(maxlen == 0)
        return s.size();
        return s.size()-maxlen+1;
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends