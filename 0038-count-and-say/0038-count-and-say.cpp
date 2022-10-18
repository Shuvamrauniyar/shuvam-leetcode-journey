class Solution {
public:
        
        string find(int n,string s)
        {
               if(n==1)  
                   return s;
            string d="";
            for(int i=0;i<s.size();i++)
            {
                int count=1;
                while(s[i]==s[i+1]&&i<(s.size())){
                    
                    count++;
                    i++;
                }
                string c=to_string(count);
                
                 d=d+c+s[i];
                
            } 
                // s=s+d;
               // cout<<d<<" "<<n<<endl;
            return find(n-1,d);
            
        }
    string countAndSay(int n) {
          string s="1";
        return find(n,s);
            
    }
};