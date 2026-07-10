class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int vol=1;
        int maxArea=0;
        int minimum=height[left];

        while(left<right)
        {
            minimum=min(height[left],height[right]);
            vol=minimum*(right-left);
            maxArea=max(vol,maxArea);
            if(minimum==height[left])
            {
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};