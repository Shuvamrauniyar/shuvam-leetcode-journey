class Solution {
public:
    bool checkValidString(string s) {
        stack<char>st1;
        stack<char>st2;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                st1.push(i);
            else if(s[i]==')'){
                if(!st1.empty())
                st1.pop();
                
                else if(!st2.empty())
                st2.pop();
                else 
                    return false;
            }
            
            else if(s[i]=='*')
                st2.push(i);
              
                   
        }
        while(!st1.empty()&&!st2.empty())
        {
            
        if(st1.top()>st2.top()) return false;
            else
            {
                st1.pop();
                st2.pop();
            }
        }
        if(st1.empty())return true;
          return false;
            
    }
};