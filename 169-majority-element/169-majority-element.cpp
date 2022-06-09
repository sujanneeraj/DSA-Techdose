class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counter;
        
        for(int i = 0; i < nums.size(); i++) {
           
             if(counter.find(nums[i]) != counter.end()) {
                counter[nums[i]] += 1;
            }
               else {
                   counter[nums[i]] = 1;
               }
            
            
            
        }
        
        
        int n = nums.size();
        int majorityElement = 0;
        for(auto &itr: counter) {
            if(itr.second > n/2) {
                majorityElement = itr.first;
            }
        }
        
        return majorityElement;
    }
               
               
};