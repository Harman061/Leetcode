class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){return false;}

        long long revNum=0;
        long long temp = x;
        while(temp!=0)
        {
            int digit = temp%10;
            revNum=revNum*10 + digit;
            temp/=10;
        }
        return revNum==x;
    }
};