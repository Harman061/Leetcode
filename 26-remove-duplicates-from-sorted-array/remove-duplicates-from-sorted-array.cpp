class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uniqueElements;
        uniqueElements.insert(nums.begin(),nums.end());
        copy(uniqueElements.begin(),uniqueElements.end(),nums.begin());
        return uniqueElements.size();
    }
};