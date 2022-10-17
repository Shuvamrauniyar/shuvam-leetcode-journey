class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        //set<int>s1;
        for(char c:s)
            m[c]++;
        int checkcount=m[s[0]];
        for(auto i=m.begin();i!=m.end();i++){
         //s1.insert(i->second);
            if(checkcount!=i->second)
                return false;
        }
        return true;
        
    }
};