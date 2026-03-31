class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;

        v.push_back(nums[0]);

        for(int i = 1; i < n; i++){
            v.push_back(v[i-1] + nums[i]);
        }

        return v;
    }
};