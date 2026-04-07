class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<int> v;
        int left = 0;

        v.push_back(nums[0]);

        for(int i = 0; i < n; i++){
            sum += nums[i];
        }

        for(int i = 0; i < n; i++){
            if(i > 0){
                v.push_back(v[i-1] + nums[i]);
            }

            if(i == 0){
                if(left == sum - nums[0]){
                    return i;
                }
            }
            else if(v[i-1] == (sum - v[i-1] - nums[i])){
                return i;
            }
        }

        return -1;
    }
};