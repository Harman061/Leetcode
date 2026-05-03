class Solution {
public:
    bool rotateString(string s, string goal) {
        //cycle n a string approach
        //2 pointers at beginning of each string
        int n=s.length();
        int m=goal.length();
        if(m!=n) return false;
        string newS=s+s;
        return (newS.find(goal)!=string::npos);
    }
};