/*class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans=0;
        int i=0,j=0,n=s.length(),k=3;
        unordered_map<char,int>mp;
        while(j<n){
            mp[s[j]]++;
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(mp.size()==k){
                    ans++;
                }
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
                j++;
            }
        }
        return ans;*/

class Solution {
public:
    int countGoodSubstrings(string s) {

        int n=s.length();
        int k=3;
        int count=0;

        for(int i=0;i<n;++i)
        {
            if(i>=k-1)
            {
                string window=s.substr(i-2,3);

                unordered_set<char> set(window.begin(),window.end());
                if(set.size()==3)
                ++count;
            }
        }
                return count;
    }
};