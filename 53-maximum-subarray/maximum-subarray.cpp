class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*int n=nums.size();
        
        int max_sum=nums[0];
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int curr_sum=0;
                for(int k=i;k<=j;k++)
                {
                    curr_sum+=nums[k];
                    if(curr_sum>max_sum)
                    {
                        max_sum=curr_sum;
                    }
                    else continue;
                }
            }
        }
        return max_sum;*/


      /*  int n=nums.size();
        
        int max_sum=nums[0];
        for(int i=0;i<n;i++)
        {
            int curr_sum=0;
            for(int j=i;j<n;j++)
            {
                
                    curr_sum+=nums[j];
                    if(curr_sum>max_sum)
                    {
                        max_sum=curr_sum;
                    }
                    else continue;
            }
        }
        return max_sum;*/


        int curr_sum=0;
        int max_sum=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            curr_sum+=nums[i];
            if(curr_sum>max_sum)
            {
                max_sum=curr_sum;
            }
            if(curr_sum<0)
            {
                curr_sum=0;
            }
           
        }
        return max_sum;
    }
};