class Solution {
public:
    long long minimumSteps(string s) {
        long long cnt = 0, ans = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                ans += cnt;
            } else {
                cnt++;
            }
        }
        return ans;
    }
};