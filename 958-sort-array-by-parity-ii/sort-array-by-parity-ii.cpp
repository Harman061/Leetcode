/*class Solution {
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
            else 
            {
                swap(nums[a],nums[b]);
            }

            
        }
        return nums;
    }
};*/


class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int>& nums)
    {
        int i=0,j=1;
        while(i<nums.size() && j<nums.size())
        {
            if(nums[i]%2==0)
            {
                i+=2;
            }
            else if(nums[j]%2==1)

{
    j+=2;
}
else 
swap(nums[i],nums[j]);        }
return nums;
    }
};