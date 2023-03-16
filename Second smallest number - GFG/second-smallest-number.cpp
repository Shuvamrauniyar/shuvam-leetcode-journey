//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++



class Solution{   
  public:
    string secondSmallest(int S, int D){
        // code here 
        if((D*9) < S)
        return "-1";
        
      //  int num = pow(10,D-1);
        int target = S - 1;
        //string ans = to_string(num); runtime error for large value like D = 10^5
       string ans = "";
        for(int i = 0;i<D;i++)
        {
            if(i == 0)
            ans+= "1";
            else
            ans += "0";
        }
        for(int i = D-1;i>=0;i--)
        {
            if(target >= 9)
            {
                ans[i] = '9';
                target -= 9;
            }
            else if (target > 0)
            {
                int ch = target;
                if(i == 0)
                ans[i] = (ch+1) + '0';
                else
                ans[i] = ch + '0';
               // cout<<ans[i]<<endl;
                target -= target;
            }
            if(target == 0)
            break;
        }
        //cout<<ans<<endl;
      // cout<<ans<<endl;
        int flag = 0;
        for(int i = D-1; i>0 ;i--)
        {
            
            if(ans[i] == '9' && ans[i-1] == '9'){
             continue;
            }
            else
            {
                flag = 1;
                int x1 = ans[i]-'0';
                
                x1 -= 1;
                ans[i] = x1 + '0';
                int x2 = (ans[i-1]) - '0';
                x2 += 1;
                ans[i-1] = x2 + '0';
                //ans[i-1] += '1';
                break;
            }
        }
        if(!flag)
        return "-1";
        return ans;
    }
};


//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends