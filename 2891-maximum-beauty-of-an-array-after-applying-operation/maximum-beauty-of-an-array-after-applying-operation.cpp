class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>sweep;
        for(int i=0;i<n;i++)
        {
            sweep[nums[i]-k]++;
            sweep[nums[i]+k+1]--;
        }
        int maxLen=0,len=0;
        for(auto i:sweep)
        {
          len+=i.second;
          maxLen=max(maxLen,len);
        }
        return maxLen;
    }
};