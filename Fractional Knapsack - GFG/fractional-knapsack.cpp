//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    
    static bool cmp(Item &i1,Item &i2)
    {
        return ((double)i1.value/(double)i1.weight)>((double)i2.value/(double)i2.weight);
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,cmp);
        double maxprofit=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i].weight<=w){
            w-=arr[i].weight;
            maxprofit+=arr[i].value;
        }
        else
        {
            maxprofit+=((double)arr[i].value/(double)arr[i].weight)*(double)w;
            break;
        }
        }
        return maxprofit;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends