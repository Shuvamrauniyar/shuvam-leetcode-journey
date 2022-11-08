class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        
        for(int i=s.size()-1;i>=0;i--)
        {
            if(st.empty()||abs(st.top()-s[i])!=32)
                st.push(s[i]);
            else
                st.pop();
        }
        s="";
        while(!st.empty())
        {
            s+=st.top();
           st.pop();
        
        }
        return s;
    }
};