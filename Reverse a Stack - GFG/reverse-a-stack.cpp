//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    stack<int> Reverse(stack<int>&st){
        if(st.empty())
        return st;
         int x=st.top();
         st.pop();
         Reverse(st);
        return reverse_insert(st,x);
    }
   stack<int>reverse_insert(stack<int>&st,int x)
    {
        if(st.empty()){
        st.push(x);
        return st;
        }
        int y=st.top();
        st.pop();
        reverse_insert(st,x);
        st.push(y); 
        return st;
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        stack<int> ans=ob.Reverse(St);
        vector<int>res;
        while(ans.size())
        {
            res.push_back(ans.top());
            ans.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends