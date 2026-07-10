class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int ans=0;

        unordered_set<char> ch;

        for(int right=0;right<s.size();right++)
        {
            
            while(ch.count(s[right]))
            {
                ch.erase(s[left]);
                left++;
            }

                ch.insert(s[right]);
                ans=max(ans,right-left+1);


            
            
                
            
            
        }
        return ans;
    }
};