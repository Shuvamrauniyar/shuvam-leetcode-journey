class Solution {
public:
    string removeDuplicates(string& s) {
        int i = 0;
        for(int j = 1; j < s.size(); ++j)
            if (i<0 || s[i] != s[j]) //this condition is same as if(st.empty)||st.top()!=s[j])
                s[++i] = s[j]; //push means increment i
            else --i; //pop decrement i
        cout<<i<<endl;
        return s.substr(0, i+1 );//i is not inclucive so we go till i+1 to make s[i] come in range in substring
    }
};
// class Solution {
// public:
//     string removeDuplicates(string s) {
//         stack<char>st;
//         for(int i=0;i<s.size();i++)
//         {
//             if(st.empty()||st.top()!=s[i])
//                 st.push(s[i]);
//             else
//                 st.pop();
//         }
//         s="";
//         while(!st.empty())
//         {
//             s+=st.top();
//         st.pop();
//         }
//         reverse(s.begin(),s.end());
//         return s;
//     }
        
// };