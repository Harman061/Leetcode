class Solution {
public:
    int countDays(int days, vector<vector<int>>& m) {
        sort(m.begin(), m.end()); // m[i][0] < m[i+1][0]

        int start = m.front()[0];
        int end = m.front()[1];

        int ans = start - 1; // gap b/w day 1 and first meeting
        for(int i = 1; i < m.size(); i++){
            int currS = m[i][0], currE = m[i][1];
            ans += max(0, currS - end - 1); // if gap available -> add it
            end = max(end, currE); 
        }
        ans += days - end; // gap b/w last meeting and ending day

        return ans;
    }
};