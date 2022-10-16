class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
        for(int i=0;i<matrix.size();i++)
        {
            int n=matrix[i].size();
            if(target>=matrix[i][0]&&target<=matrix[i][n-1]){
            int low=0,mid,high=n-1;
                while(low<=high)
                {
                    mid=(low+high)/2;
                   if(matrix[i][mid]==target)
                       return true;
                    else if(matrix[i][mid]<target)
                        low=mid+1;
                    else
                        high=mid-1;
                }
                return false;
            }
            
        }
        return false;
    }
};