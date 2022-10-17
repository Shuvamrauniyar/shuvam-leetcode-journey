class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        set<int>s1;
        for(char c:s)
            m[c]++;
        for(auto i=m.begin();i!=m.end();i++){
         s1.insert(i->second);
        }
        if(s1.size()==1)
        return true;
        return false;
    }
};