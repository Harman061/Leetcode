class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum=LLONG_MIN;
        long long cSum=0;
        for(int i=0;i<nums.size();i++)
        {
            cSum=cSum+nums[i];
            if(sum<cSum)
            {
                sum=cSum;
            }
            if(cSum<0)
            {
                cSum=0;
            }
        }
        return sum;
    }
};