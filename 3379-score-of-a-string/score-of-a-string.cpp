class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=0;i<s.length()-1;i++)
        {

            int ele1=s[i];
            int ele2=s[i+1];

            score+=abs(ele2-ele1);
        }
        return score;
    }
};