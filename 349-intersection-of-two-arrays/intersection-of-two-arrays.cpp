class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> ans;
        vector<int> ans2;
        unordered_map<int,int> mp;

        for(auto it: nums1)
        {
            mp[it]++;
        }

        for(auto it: nums2)
        {
            if(mp.count(it)>0)
            {
                ans.insert(it);
            }
        }
        for(auto it:ans){
ans2.push_back(it);}
        return ans2;
    }
};