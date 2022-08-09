class Solution {
    void findboard(int col,vector<vector<string>>&ans,vector<string>&board,vector<int>&lowerdiagonal,vector<int>&upperdiagonal,vector<int>&left,int n)
    {
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(lowerdiagonal[row+col]==0&&upperdiagonal[n-1+col-                row]==0 &&left[row]==0)
            {
                lowerdiagonal[row+col]=1;
                upperdiagonal[n-1+col-row]=1;
                left[row]=1;
                board[row][col]='Q';
                findboard(col+1,ans,board,lowerdiagonal,upperdiagonal,left,n);
                lowerdiagonal[row+col]=0;
                upperdiagonal[n-1+col-row]=0;
                left[row]=0;
                board[row][col]='.';
                
            }
        }
            
}
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
            board[i]=s;
        vector<int>lowerdiagonal(2*n-1,0),upperdiagonal(2*n-1,0),left(n,0);
        findboard(0,ans,board,lowerdiagonal,upperdiagonal,left,n);
        return ans;
    }
};