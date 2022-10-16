class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
        for(int i=0;i<matrix.size();i++)
        {
            int n=matrix[i].size();
            if(target>=matrix[i][0]&&target<=matrix[i][n-1]){
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==target)
                    return true;
            }
                return false;
            }
            
        }
        return false;
    }
};