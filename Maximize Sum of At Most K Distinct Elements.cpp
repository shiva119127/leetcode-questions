class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.rbegin(), nums.rend());  // sort descending
        
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++) {
            // add only if it's distinct
            if(i == 0 || nums[i] != nums[i - 1]) {
                result.push_back(nums[i]);
            }
            
            if(result.size() == k) break;
        }
        
        return result;
    }
};