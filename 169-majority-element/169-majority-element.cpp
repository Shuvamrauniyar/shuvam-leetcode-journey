class Solution {
public:
    //moore votings algorithm
    int majorityElement(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        
        return nums[nums.size()/2];
    }
};