//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        unordered_map<char,int>m={{'b',1},{'a',1},{'l',2},{'o',2},{'n',1}};
        unordered_map<char,int>m1;
        
       // vector<int>v(s.size());
        for(char ch:s)
        {
            m1[ch]++;
        }
        int mini = INT_MAX;
        for(int i =0;i<s.size();i++)
        {
            if(m[s[i]])
            mini =  min(mini,m1[s[i]]/m[s[i]]);
        }
    //     int totCharlen = 0;
        
    //     for(auto num:v)
    //     {
    //         totCharlen += num;
    //     }
    //   // cout<<totCharlen<<s.size()<<endl;
        
    //     return totCharlen/m.size();
        return mini;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends