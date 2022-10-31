class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
         bool check=true;
        for(int i=0;i<m;i++)
        {
            int j=0;
            int col=i;
           
            while(col<m&&j<n)
            {

            if(matrix[0][i]!=matrix[j++][col++])
            {
                check=false;
                break;
            }
                
            }
            if(!check)
                break;
        }
        for(int k=1;k<n;k++)
        {
             int j=0;
            int row=k;
           
            while(row<n&&j<m)
            {

            if(matrix[k][0]!=matrix[row++][j++])
            {
                check=false;
                break;
            }
                
            }
            if(!check)
                break;
        }
        if(!check)
            return false;
        return true;
    }
};