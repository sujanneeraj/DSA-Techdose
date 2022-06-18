class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     
        int res = INT_MIN;
        int current_sum = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            current_sum += nums[i];
            res = max(res, current_sum);
            if(current_sum < 0) {
                current_sum = 0;
            }
            
            
        }
        
        return res;
        
    }
};