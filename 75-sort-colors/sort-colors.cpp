class Solution {
public:
    void sortColors(vector<int>& nums) {
       /* int zero=0,one=0,two=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zero++;
            }
            else if(nums[i]==1)
            {
                one++;
            }
            else if(nums[i]==2) {
                two++;
            }
        }
        for (int x = 0; x < zero; x++) nums[x] = 0;
        for (int y = zero; y < zero+one; y++) nums[y] = 1;
        for (int z = zero+one; z < nums.size(); z++) nums[z] = 2;*/
int n=nums.size();
       int low = 0, mid = 0, high = n - 1; // 3 pointers

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1) {
            mid++;
        }
        else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }

    }
};