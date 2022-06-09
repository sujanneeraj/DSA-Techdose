class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> result;
        
        for(int i = 0; i <=n; i++) {
            
            unsigned int count = 0;
            int number = i;
            
            while(number) {
                number &= number-1;
                count++;
            }
            result.push_back(count);
            
            
        }
        return result;
    }
};