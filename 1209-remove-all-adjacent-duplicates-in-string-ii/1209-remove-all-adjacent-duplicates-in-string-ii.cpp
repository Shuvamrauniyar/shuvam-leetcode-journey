class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        stack<pair<char,int>>st;
        //unordered_map<char,int>m;
        //int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty()||st.top().first!=s[i]||st.top().second!=k-1)
            {
                if(!st.empty()&&st.top().first==s[i])
                st.push({s[i],st.top().second+1}),cout<<s[i]<<endl;
                else
                    st.push({s[i],1});
                //m[s[i]]++;
                
            }
            else
            {
                while(!st.empty()&&st.top().first==s[i])
                    st.pop();
               
            }
        }
        s="";
        while(!st.empty()){
            s+=st.top().first;
        st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};