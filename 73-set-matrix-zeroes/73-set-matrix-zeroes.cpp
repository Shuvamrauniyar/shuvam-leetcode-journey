class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<int>d1(m.size(),-1),d2(m[0].size(),-1);
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[0].size();j++)
            {
               // if(prevr==i||prevc==j)continue;
                if(m[i][j]==0)
                {
                    d1[i]=0;
                    d2[j]=0;
                
                }
            }
        }
         for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[0].size();j++)
            {
                if(d1[i]==0||d2[j]==0)
                {
                    m[i][j]=0;
                }
            }
         }
    }
};