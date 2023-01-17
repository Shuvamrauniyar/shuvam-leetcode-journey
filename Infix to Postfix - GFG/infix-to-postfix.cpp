//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int prec(char ch)
    {
        if(ch == '^')
        return 3;
        if(ch == '/' || ch == '*')
        return 2;
        if(ch == '+' || ch == '-')
        return 1;
        return -1;
    }
    string infixToPostfix(string s) {
        // Your code here
        string postfix = "";
        stack<char>st;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '(')
            st.push('(');
            
            else if(s[i] == ')')
            {
                while(!st.empty() && st.top() != '(')
                {
                    postfix += st.top();
                   // cout<<postfix<<endl;
                    st.pop();
                }
                st.pop();
            }
            else if((s[i] >= 'a' && s[i] <= 'z') ||( s[i] >= 'A' && s[i] <='Z' )|| (s[i] == '0' && s[i] <= '9'))
            postfix += s[i];
            
            //case when operator is encounter
            else {
                while(!st.empty() && prec(st.top()) >= prec(s[i]))
                {
                    postfix += st.top();
                    st.pop();
                    
                }
                st.push(s[i]);
            }
        }
            while(!st.empty())
            {
                postfix += st.top();
                st.pop();
            }
        return postfix;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends