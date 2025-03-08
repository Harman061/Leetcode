class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
for(auto c : operations)
{
    if (c =="C")
    {
        st.pop();
    }
    else if (c =="D")
    {
        st.push(st.top() * 2);
    }
    else if (c =="+")
    {
        int num2=st.top();
        st.pop();
        int num1=st.top();
        st.pop();
        int sum=num1+num2;
        st.push(num1);
        st.push(num2);
        st.push(sum);
    }
    else 
    {
        st.push(stoi(c));
    }
}

int sum=0;
while(!st.empty())
{
    int num=st.top();
    sum+=num;
    st.pop();
}
return sum;
    }
};