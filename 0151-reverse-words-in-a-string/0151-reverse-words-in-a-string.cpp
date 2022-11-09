class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string dummy="";
        bool flag=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==32&&flag==true)
            {
                cout<<dummy<<endl;
                
                st.push(dummy);
                dummy="";
                flag=false;
            }
            else if(s[i]!=32){
                flag=true;
                dummy+=s[i];
            }
        }
        if(dummy!="")
        st.push(dummy);
        cout<<dummy<<endl;
        s="";
        while(st.size()!=1)
        {
            s+=st.top();
            s+=" ";
            st.pop();
        }
        s+=st.top();
        return s;
    }
};