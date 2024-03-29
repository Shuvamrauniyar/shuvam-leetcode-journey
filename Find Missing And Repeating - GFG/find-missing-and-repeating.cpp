//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int xorVal = 0 ;
        
        for(int i = 0; i<n;i++)
         xorVal ^= *(arr+i);
         
         for(int i = 1; i<=n ;i++)
         xorVal ^= i;
         
         //getting righmost set bit position of xorVal 
         int setBitPos = xorVal & ~(xorVal -1);
         
         //categorizing into two sets( we will not create new array to store the categorized elements ,directly we will store their final xorvalues in two variables )
         //firstly categorizing the array elements
         //why categorizing ? , bcz we know to get righmost set bit after XOR Operation, any one number(among x and y ) must have the bit set to that same postion(of rightmost bit) 
         int x = 0 , y = 0 ;
         for(int i = 0 ; i<n ; i++ )
         {
             if(*(arr+i) & setBitPos)
             x ^= *(arr+i);
             
             else
             y ^= *(arr+i);
             
         }
         //secondly categorizing the elements form 1 to N
         for(int i = 1 ; i<=n ; i++ )
         {
             if(i & setBitPos)
             x ^= i;
             
             else
             y ^= i;
             
         }
         //now finding among x and y ,which one is the missing number and which occurs twice
         int count_x= 0 ;
         for(int i = 0 ;i<n;i++)
         {
             if(x == *(arr+i))
             count_x++;
         }
         int ans[]={x,y};
     int *p = ans;
     if(count_x==0)
     {
         ans[0]=y;
         ans[1]=x;
     }
     
        return p;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends