class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> nums;
        int low=0,high=s.length();

        for(auto it:s)
        {
            if(it=='I')
            {
                nums.push_back(low);
                low++;
            }
            else 
            {nums.push_back(high);
                high--;}
        }
        nums.push_back(low);
        return nums;
    }
};