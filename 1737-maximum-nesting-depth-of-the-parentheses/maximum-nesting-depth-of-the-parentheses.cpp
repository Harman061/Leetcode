class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxi=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push('(');
            }
            else if(s[i]==')')
            {
                int n=st.size();
                maxi=max(n,maxi);
                st.pop();
            }
        }
        return maxi;
    }
};