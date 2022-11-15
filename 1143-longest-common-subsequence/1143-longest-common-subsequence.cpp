class Solution {
public:
/*
   You are passing the strings by value (in every recursion call the string is getting copied and that takes O(string.len()) time which increases the overall time, so pass the string the reference -> int lcs(string &text1, string &text2, int idx1 = 0, int idx2 = 0) <- like this, so that the pointer is passed as an reference.
*/
    int findlcs(int i,int j,string &s1,string &s2,  vector<vector<int>>&dp)
    {
        if(i<0||j<0)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s1[i]==s2[j])
            return dp[i][j]=1+findlcs(i-1,j-1,s1,s2,dp);
        else
        return dp[i][j]=max(findlcs(i-1,j,s1,s2,dp),findlcs(i,j-1,s1,s2,dp));
        
    }
    int longestCommonSubsequence(string s1, string s2) {
        vector<vector<int>>dp(s1.size(),vector<int>(s2.size()+1,-1));
        return findlcs(s1.size()-1,s2.size()-1,s1,s2,dp);
    }
};