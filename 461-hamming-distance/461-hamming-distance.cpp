class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int res = x ^ y;
        int setBits = 0;
        
        while(res > 0) {
            setBits += res & 1;
            res >>= 1;
        }
        return setBits;
        
    }
};