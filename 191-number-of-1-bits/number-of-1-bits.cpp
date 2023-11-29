class Solution {
public:
  int hammingWeight(uint32_t n) {
    /*int count = 0;
    
    while (n) {
        n &= (n - 1);
        count++;
    }
    
    return count;*/

    int ones=0;

    while(n)
    {
        ones+=n%2;
        n>>=1;
    }
    return ones;
}};