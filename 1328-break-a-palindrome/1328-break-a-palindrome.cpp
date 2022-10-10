class Solution {
public:
    string breakPalindrome(string s) {
        string s1;
        // sort(s.begin(),s.end());
        // char mini=s[0];
        if(s.size()==1)return "";
        bool check=false;
        for(int i=0;i<s.size();i++)
        {
            // if(mini>s[i])
            // {
            //     mini=s[i];
            //     break;
            // }
            if(s[i]!='a')
            {
                char ch=s[i];
                s[i]='a';
                check=true;
                 s1=s;
                reverse(s1.begin(),s1.end());
                if(s==s1)
                {
                    s[i]=ch;
                    s[s.size()-1]='b';
                }
                break;
            }
     }
        if(check==false)
        {
            s[1]='b';
        }
        return s;
    }
        //if(mini!=s[0])
};