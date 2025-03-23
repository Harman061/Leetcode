class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=nums[0];
        int j=nums.size()-1;

        vector<int> numss;
        for(int a=0;a<nums.size();a++) {
            if(nums[a]%2==0)
            {
                numss.push_back(nums[a]);
            }
        }

        for(int b=0;b<nums.size();b++) {
            if(nums[b]%2==1)
            {
                numss.push_back(nums[b]);
            }
        }
        /*while(i<=j)
        {
            if(nums[i]%2==1)
            {
                i++;
            }
            else if(nums[j]%2==0) {
                j--;
            }
            else{
                swap(nums[j],nums[i]);
            }
        }*/
        return numss;
    }
};