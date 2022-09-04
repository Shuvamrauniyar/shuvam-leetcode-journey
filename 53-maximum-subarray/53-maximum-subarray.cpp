class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsofar=INT_MIN,maxtill=0;
        for(int i=0;i<nums.size();i++)
        {
            maxtill+=nums[i];
            if(maxtill>maxsofar)maxsofar=maxtill;
            if(maxtill<0)maxtill=0;
        }
        return maxsofar;
    }
};