class Solution {
public:
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

    stack<int> st;
    vector<int> ans;
    map<int,int> mp;
    for(int i=nums2.size()-1;i>=0;i--)
    {
        while(st.size()>0&&st.top()<nums2[i])
        {
            st.pop();
        }
        if(st.size()==0)
        {
            mp[nums2[i]]=-1;
        }// [1,2,3,4]
        //[1,3,2,4]
        else{
            mp[nums2[i]]=st.top();
        }
        st.push(nums2[i]);
    }
    

        for(auto i:nums1)
        {
            ans.push_back(mp[i]);
        }
        return ans;
    }
};