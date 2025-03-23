class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int a=0;
        int b=1;
        while(a<nums.size() && b<nums.size())
        {
            if(nums[a]%2==0)
            {
                a+=2;
            }
            else if(nums[b]%2==1)
            {
                b+=2;
            }
            else //if(nums[a]%2==1 && nums[b]%2==0)
            {
                swap(nums[a],nums[b]);
            }

            
        }
        return nums;
    }
};