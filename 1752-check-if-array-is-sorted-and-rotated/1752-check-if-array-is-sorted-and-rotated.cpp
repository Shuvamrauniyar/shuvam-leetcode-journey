class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])//WE HAVE A LIMITATIONS THAT ONLY ONE ROTATION IS TO BE DONE SO THER                                    E MUST BE A SINGLE BREAK POINT SO COUNTING THE BREAK POINTS 
            {
              count++;
            }
        }
        if(nums[n-1]>nums[0]) //THIS IS FOR THE EDGE CASES LIKE 2,1,3,4 ,HERE ALSO ONE BREAK POINT WE                                WILL FIND BUT ANS IS FALSE BCZ AFTER ROTATION IT WILL 1,3,4,2 WHICH IS                                 FALSE ,SO WE ALSO NEED TO COMPARE BETWEEN FIRST AND LAST ELEMENT.
            count++;
        return count<=1; //1 BREAK POINT IS FIXED LIKE [1,2,3,4](4>1),[2,1,3,4](4>2) BUT [2,2,2,2] HAS                             0 BREAK POINT
    }
};