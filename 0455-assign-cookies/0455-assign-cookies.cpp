class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.rbegin(),g.rend());
        sort(s.rbegin(),s.rend()); //sorting both vectors in descending order
        int count=0;
        for(int i=0,j=0;i<g.size()&&j<s.size();)
        {
            if(g[i]<=s[j])
            {  
                count++;
                i++,j++;  //if condition satisfied ,we will increase both the pointers
            }
            else
                i++; //if not satisfied we will try to find the children by increasing 'i' which can be                              satisfied with current s[j]
            
        }
    
        return count;
    }
};