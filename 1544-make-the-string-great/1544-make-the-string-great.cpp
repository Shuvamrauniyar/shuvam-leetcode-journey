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
        // string ans="";
        // for(int i=0;i<s.size()-1;i++) //wrong for testcase abBAcC
        // {
        //     if(abs(s[i]-s[i+1]!=32))
        //         ans+=s[i];
        //     else
        //         i++;
        // }
        // if(i!=s.size())
            
       // return ans;
        return s;
    }
};