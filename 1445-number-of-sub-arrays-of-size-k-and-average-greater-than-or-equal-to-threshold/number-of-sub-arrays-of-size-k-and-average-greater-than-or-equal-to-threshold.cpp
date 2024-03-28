class Solution {
public:
    int numOfSubarrays(vector<int>&nums, int k, int t) {
        int i=0,j=0,n=nums.size(),sum=0,ans=0;
        while(j<n){
            sum+=nums[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                int avg=sum/k;
                if(avg>=t){
                    ans++;
                }
                sum-=nums[i];
                i++;
                j++;
            }
        }
        return ans;
    }
};