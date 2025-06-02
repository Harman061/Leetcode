class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size()>s.size()) return {};

        vector<int> sHash(26,0) , ans , pHash(26,0);
        for(int i=0;i<p.size();i++)
        {
            pHash[p[i]-'a']++;
            sHash[s[i]-'a']++;
        }
        if(pHash == sHash) ans.push_back(0);

        for(int i=p.size();i<s.size();i++)
        {
            sHash[s[i-p.size()]-'a']--;
            sHash[s[i]-'a']++;

            if(sHash==pHash) ans.push_back(i-p.size()+1);

        }
        return ans;
    }
};