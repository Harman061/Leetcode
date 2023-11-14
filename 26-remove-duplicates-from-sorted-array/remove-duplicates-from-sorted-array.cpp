class Solution {
public:
 int removeDuplicates(vector<int>& nums) {
   /* int i = 0;
    for (int n : nums)
        if (!i || n > nums[i-1])
            nums[i++] = n;
    return i;*/
    /*nums.erase(unique(nums.begin(),nums.end()),nums.end());
    return nums.size();*/
  int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;   
}
};