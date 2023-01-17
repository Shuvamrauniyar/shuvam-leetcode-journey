//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  bool isoperator(char ch)
  {
      if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
      return false;
      
      return true;
  }
    string preToInfix(string pre_exp) {
        // Write your code here
        stack<string>st;
        
        for(int i = pre_exp.size()-1 ; i>=0 ; i--)
        {
            if(isoperator(pre_exp[i]))
            {
                string s1 = st.top();
                st.pop();
                string s2 = st.top();
                st.pop();
                st.push("("+s1+pre_exp[i]+s2+")");
            }
            else
            st.push(string(1,pre_exp[i]));
        }
        string infix = "";
        while(!st.empty())
        {
            infix += st.top();
            st.pop();
        }
        return infix;
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends