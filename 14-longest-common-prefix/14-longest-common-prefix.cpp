class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool check=true;
        string ans="";
        for(int i=0;i<strs[0].size();i++)
        {
            int s;
        for( s=0;s<strs.size()-1;s++)
        {
            if(strs[s][i]!=strs[s+1][i])
            {
                check=false;
                break;
            }
        }
            if(check==true)ans+=strs[s][i];
        }
        return ans;
    }
};