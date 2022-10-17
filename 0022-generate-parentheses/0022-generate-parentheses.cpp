class Solution {
public:
        
        void generate(int left,int right,string str,vector<string>&ans)
        {
                if(left==0&&right==0)
                {
                  ans.push_back(str);
                    return;
                }
                if(left>0){
                        generate(left-1,right,str+'(',ans);
                }
               if(right>left)
                         generate(left,right-1,str+')',ans);
               
        }
    vector<string> generateParenthesis(int n){
        vector<string>ans;
             generate(n,n,"",ans);
            return ans;
    }
};