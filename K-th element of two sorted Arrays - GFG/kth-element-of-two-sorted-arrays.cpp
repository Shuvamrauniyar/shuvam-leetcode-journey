//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        //int store[k];
        int ans;
        int i=0,j=0,s=0;
        while(i<n && j<m && s<k)
        {
           // if(s>=k)break;
            if(arr1[i]<arr2[j])
            ans=arr1[i++];
            else
            ans=arr2[j++];
            
           // cout<<ans<<" ";
            s++;
        }
        while(i<n && s<k){
            //if(s>=k)break;
        ans=arr1[i++];
            //cout<<ans<<" ";
        s++;
        }
        while(j<m && s<k){ //i wrote j<n but it is j<m ,thats why incorrect ans was thrown
            //if(s>=k)break;
        ans=arr2[j++];
           // cout<<ans<<" ";
        s++;
        }
        return ans;
    }
        
//           int i=0; 

//     int j=0;

//     int k=0;
//   int arr3[n+m];
//     while(i<n && j<m){

//         if(arr1[i] < arr2[j]){

//             arr3[k++]=arr1[i++];

//         }

//         else{

//             arr3[k++]=arr2[j++];

//         }

//     }

//     while(i<n){

//         arr3[k++]=arr1[i++];

//     }

//     while(j<m){

//         arr3[k++]=arr2[j++];

//     }   
//     int ans= arr3[k1-1];
//     return ans;
//     }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends