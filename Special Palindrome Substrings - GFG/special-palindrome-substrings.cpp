//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
    //Complete the function and return minimum number of operations
    public:
    
    int checkPalindrome(string temp , int startIdx , int n2)
    {
        int start = 0, end = temp.size()-1;
        int op =0;
        
        while(start<end){
            if(temp[start] != temp[end])
            {
                if(start>= startIdx && end <= (startIdx+n2-1)) //if start and end lies in between the substring that is equal to s2
                // then the substring needs to be palindrome inorder to make s1 palindrome.observe for temp= cdabbaef s2 = abba 
                //here abba in in temp needs to be palindromme inorder to make s1 palindrome but temp = efghabcd s2 = abcd then its ok  for abcd to non palindrome
                return 1e9;
                //else
                op++;
            }
            start++;
            end--;
        }
        return op;
    }
    int specialPalindrome(string s1, string s2){
        //Code Here
        int n1 = s1.size();
        int n2 = s2.size();
        
        int minOp = 1e9;
        for(int i = 0; i<=n1-n2; i++)
        {
            int op = 0;
            string temp= s1;
            for(int k = 0; k < n2;k++)
            {
                if(temp[i+k] != s2[k])
                {
                    op++;
                    temp[i+k] = s2[k];
                }
            }
            minOp = min(minOp, op + checkPalindrome(temp,i,n2));
            temp = s1;
        }
        if(minOp == 1e9)
        return -1;
        return minOp;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        Solution obj;
        int ans = obj.specialPalindrome(s1,s2);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends