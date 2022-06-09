class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        return Soln2(nums);
        
        
        
    }
    
private:
    
    int Soln2(vector<int> &nums) {
     
        int majority = nums[0];
        int count = 1;
        
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == majority) {
                count +=1;
            }
            else {
                count -=1;
                if(count == 0) {
                    majority = nums[i];
                    count = 1;
                }
            }
        }
        return majority;
    }
    
    int Soln1(vector<int> &nums) {
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