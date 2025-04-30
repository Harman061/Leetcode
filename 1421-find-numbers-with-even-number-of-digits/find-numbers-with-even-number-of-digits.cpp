class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(auto num:nums)
        {
            int evenNumber= to_string(num).length()%2;
            if(evenNumber==0)
            {
                count++;
            }
        }
        return count;
    }
};