class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>  > ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int current=nums[i];

            int left=i+1;
            int right=nums.size()-1;
            while(left<right)
            {
                if(nums[left]+nums[right]+current==0)
                {
                    ans.push_back({nums[left],nums[right],current});
                    while(left<right && nums[left]==nums[left+1]) left++;
                    while(left<right && nums[right]==nums[right-1]) right--;
                    left++;
                    right--;
                }
                else if(nums[left]+nums[right]+current<0)
                {
                    left++;
                }
                else{
                    right--;
                }
            }
        }

        return ans;
    }
};