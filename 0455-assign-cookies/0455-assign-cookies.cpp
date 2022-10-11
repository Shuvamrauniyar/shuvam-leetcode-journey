class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.rbegin(),g.rend());
        sort(s.rbegin(),s.rend());
        int count=0;
        for(int i=0,j=0;i<g.size()&&j<s.size();)
        {
            if(g[i]<=s[j]){
                count++;
                i++,j++;
            }
            else
                i++;
            
        }
    
        return count;
    }
};