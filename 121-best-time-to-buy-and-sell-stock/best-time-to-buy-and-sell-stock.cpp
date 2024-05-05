class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minEle=INT_MAX;
       int maxDiff=0;
        for(int i=0;i<prices.size();i++)
        {
            minEle=min(minEle,prices[i]);
            maxDiff=max(maxDiff,prices[i]-minEle);
        }
        return maxDiff;
    }
};