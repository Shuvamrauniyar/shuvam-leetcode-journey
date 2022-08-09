class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solvepuzzle(board);
    }
    
    bool solvepuzzle(vector<vector<char>>&board)
    {
        for(int row=0;row<board.size();row++)
        {
            for(int col=0;col<board[0].size();col++)
            {
                if(board[row][col]=='.')
                {
                    for(char ch='1';ch<='9';ch++)
                    {
                        
                        if(isvalid(ch,row,col,board)==true)
                        {
                            board[row][col]=ch;
                            if(solvepuzzle(board)==true)
                                 return true;
                             else
                            board[row][col]='.';
                        }
                           
                       
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    bool isvalid(char c,int row,int col,vector<vector<char>>&board)
    {
        for(int i=0;i<9;i++)
        {  
            if(board[row][i]==c)
                return false;
            if(board[i][col]==c)
                return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)
                return false;
            
        }
        return true;
    }
        
};