class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //the missing number will always be less than or equal to the size of the vector
        //place all positive elements less than or equal to the size of the vector to their respective index in the vector, e.g., 1 at index 0
        
        int n = nums.size();
        for(int i = 0; i < n; i++)
            while(nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i] - 1]); //place element x at index num[x - 1]
        
        //if the number at index i is not i + 1, the missing number is i + 1
        for(int i = 0; i < n; i++)
            if(nums[i] != i + 1)
                return i + 1;
        
        //else, the missing number is one more than the size of the vector
        return n + 1;
        
        
    }
};