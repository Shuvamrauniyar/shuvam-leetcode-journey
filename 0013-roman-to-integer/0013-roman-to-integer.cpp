class Solution {
public:
    int romanToInt(string s) {
     unordered_map<char,int>m{
         {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'C',500},
         {'D',500},{'M',1000}};
         
        int sum=m[s.back()];
        for(int i=0;i<s.size()-1;i++)
        {
            if(m[s[i]]<m[s[i+1]])
                sum-=m[s[i]];
            else
                sum+=m[s[i]];
        }
            return sum;
     
        
    }
};