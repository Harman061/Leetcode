class Solution {
public:
    bool divideArray(vector<int>& nums) {
        stack<int> st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(st.empty())
            {
                st.push(nums[i]);
                continue;
            } 
            int ele=st.top();
            if(nums[i]==ele)
            {
                st.pop();
            }
        }
        return st.empty();
    }
};