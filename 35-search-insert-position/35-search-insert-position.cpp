class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int mid,low=0,high=arr.size()-1;
        if(target<arr[0])return low;
        if(target>arr[high])return high+1;
        while(low<=high)
        {

        mid=(low+high)/2;
        if(arr[mid]==target)
            return mid;
        else if(target<arr[mid])
            high=mid-1;
        else
            low=mid+1;
        }
        return low;//after while loop high becomes lesser than low
    }
};