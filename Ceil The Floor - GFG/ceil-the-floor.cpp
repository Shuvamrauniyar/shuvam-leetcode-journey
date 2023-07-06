//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int,int>binarySearch(int arr[], int n, int x){
    int low = 0,high = n-1;
    int floor = -1,ceil = -1;
    while(low <= high){
        // if(floor == true){
        // if(arr[high] <= x)
        // return high;
        // }else if(floor == false)
        // {
        //     if(arr[low] >= x)
        //     return low;
        // }
        int mid = low + (high-low)/2;
        
        if(arr[mid] == x)
        return {arr[mid], arr[mid]};
        
        else if(x < arr[mid]){ //here x is lesser than arr[mid] so arr[mid] can be a ceil for x.
        ceil = arr[mid]; //this ceil value will update whenever this codn gets the control 
        high = mid-1;
        }

        else{
        floor= arr[mid]; 
        low = mid + 1;
        }
    }
    return {floor,ceil};
}
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr,arr+n);
    // for(int i = 0;i<n;i++)cout<<arr[i]<<" ";
    // cout<<endl;
    return binarySearch(arr, n, x);
    
}