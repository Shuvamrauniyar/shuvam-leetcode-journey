//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

  bool check(int i,int j,int w,vector<vector<char>>& board, string word)
  {
      
        if(w==word.size())
          return true;
      //added extra board[i][j]=='0'
      if(i==board.size() || j==board[0].size()|| j<0|| i<0 || board[i][j]=='!' || board[i][j]!=word[w]) 
      {
         // cout<<"hello"<<endl;
          return false;
      }
      //if(str.size())
     // string substri=word.substr(0,str.size());


      // str+=board[i][j]; //dont add this you will be in loop ,mark visited like dfs as same cellll may be visted twice
      char c= board[i][j];
      board[i][j]='!';
       
      bool result= check(i,j+1,w+1,board,word)||
      check(i,j-1,w+1,board,word)||
      check(i-1,j,w+1,board,word)||
      check(i+1,j,w+1,board,word);

     board[i][j]=c;
     return result;


  }
    bool isWordExist(vector<vector<char>>& board, string word) {
      
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
               // if(word[0]==board[i][j] && check(i,j,0,board,word)); //silly mistake i put semi colon in if condition
                if(word[0]==board[i][j] && check(i,j,0,board,word)) //silly mistake i put semi colon in if condition
                return true;
            }
        }
        return false;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends