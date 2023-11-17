class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0,end=nums.size()-1,min_max=0;

        while(start<end)
        {
            min_max=max(min_max,nums[start++]+nums[end--]);
        }
        return min_max;
    }
};