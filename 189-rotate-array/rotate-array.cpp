class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /*int n=nums.size();
        k=k%n;
        if(k!=0)
        {
            vector<int> temp(nums.end()-k,nums.end());   
            temp.insert(temp.end(),nums.begin(),nums.end()-k);
            copy(temp.begin(),temp.end(),nums.begin());*/

        int n=nums.size();
        k=k%n;

        vector<int> rotated(n);
        
        for(int i=0;i<n;i++)
        {
            rotated[(i+k)%n]=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=rotated[i];
        }
        }
    
};