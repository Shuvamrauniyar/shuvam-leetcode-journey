//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &a , int n){
        // code here 
        int i=0 , j=0;
        long maxsum=INT_MIN;
        long sum=0;
        while(j<n)
        {
            
            sum+=a[j];
            
            if(j-i+1 < K)
            j++;
            
            else if(j-i+1 == K)
            {
                maxsum=max(maxsum,sum);
                sum-=a[i];
                i++;
                j++;
            }
          //  j++; //you can write j++ here also or if you want to write like 
            //aditya verma bhaiya you can also do it like that way for eady understanding
            
        }
        return maxsum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends