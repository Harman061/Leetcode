class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            int comp=target-nums[i];
             if(mp.count(comp)&&mp[comp]!=i)
             {
                 return {i,mp[comp]};
             }
        }
        return {};
    }
};