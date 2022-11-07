class Solution {
public:
    int maximum69Number (int num) {
        //string s=to_string(num);
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]=='6'){
        //         s[i]='9';
        //     break;
        //     }
        // }
        // num=stoi(s);
        
        int n=num;
        int last6=-1,pos=-1;
        
        while(n)
        {
            pos++;
            if(n%10==6)
                last6=pos;
            n=n/10;
        }
        num=num+3*pow(10,last6);
        return num;
    }
};