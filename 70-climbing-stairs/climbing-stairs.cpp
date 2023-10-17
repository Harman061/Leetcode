/*class Solution {
public:
    unordered_map<int,int> cache;
    int climbStairs(int n) {
         if(cache.find(n)!=cache.end()) return cache[n];
         int result = 0;
         if (n == 0) result = 0;
         else if (n == 1) result= 1; 
         else if (n == 2) result = 2; 
         else result = climbStairs(n-1) + climbStairs(n-2); 
         
         cache[n]=result;
         return result;
    }
};*/
/*class Solution {
public:
    int ways(int n,vector <int>& dp){
        if(n==0|n==1)
        return 1;
        if(dp[n]!=-1) return dp[n];

        return dp[n]=ways(n-1,dp)+ways(n-2,dp);
    }
    int climbStairs(int n){
        vector <int> dp(n+1,-1);
        return ways(n,dp);
    }



};*/

class Solution {
public:
    int climbStairs(int n, unordered_map<int, int>& memo) {
        if (n == 0 || n == 1) {
            return 1;
        }
        if (memo.find(n) == memo.end()) {
            memo[n] = climbStairs(n-1, memo) + climbStairs(n-2, memo);
        }
        return memo[n];
    }

    int climbStairs(int n) {
        unordered_map<int, int> memo;
        return climbStairs(n, memo);
    }
};