class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        
        unordered_map<int,int> hs;

        for(int i=0;i<n;i++)
        {
            int compliment= target- nums[i];
            if(hs.find(compliment)!=hs.end())
            {
                return {hs[compliment],i};
            }
            hs[nums[i]]=i;
        }
        return {};
        
    }
};