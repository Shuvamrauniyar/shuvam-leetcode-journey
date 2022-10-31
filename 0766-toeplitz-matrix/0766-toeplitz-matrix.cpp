class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& m) {
        int n=m.size();
        int m1=m[0].size();
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m1;j++)
                if(m[i][j]!=m[i-1][j-1])
                    return false;
        }
        return true;
    }
};