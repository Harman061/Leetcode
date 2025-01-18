class Solution {
public:
    bool isPowerOfFour(int n) {
        /*if(n==0) return false;
        return (n==1) || ((n%4==0) && (isPowerOfFour(n/4)));*/

        if(n==0) return 0 ;
        while(n%4==0)
        {
            n/=4;
        }
        if (n==1) return 1;

        return 0;
    }
};