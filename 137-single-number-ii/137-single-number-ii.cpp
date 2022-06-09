class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
      //  return Soln1(nums);
       // return Soln2(nums);
        return Soln3(nums);
        
    }
    
    
private:
    
    int Soln3(vector<int> &nums) {
        int ones = 0;
        int twos = 0;
        for(int i = 0; i < nums.size(); i++) {
            ones = (ones ^ nums[i]) & (~twos);
            twos = (twos ^ nums[i]) & (~ones);
        }
        return ones;
    }
    
    int Soln2(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        
        if(nums.size() == 1) {
            return nums[0];
        }
        
        int i = 0;
        if(nums[i] != nums[i+1]){
            return nums[i];
        }
        i = nums.size()-1;
        if(nums[i] != nums[i-1]) {
            return nums[i];
        }
        
        i = 1;
        while(i < nums.size()) {
            if(nums[i] != nums[i-1]) {
                return nums[i-1];
            }
            i +=3;
        }
        
        return -1;
        
        
    }
    
    
    int Soln1(vector<int>& nums) {
        unordered_map<int, int> counter;
        
        for(int i = 0; i < nums.size(); i++) {
            if(counter.find(nums[i]) != counter.end()) {
                counter[nums[i]] +=1;
            }
            else {
                counter[nums[i]] = 1;
            }
        }
        
    
        for(auto &val : counter) {
            if(val.second == 1) {
                return val.first;
            }
           
        }
        
        return -1;
        
        
        
    }
};