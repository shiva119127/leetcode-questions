class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size();
        int count = 0;

      for(int j = 0; j < n; j++) {
    for(int i = 0; i < j; i++) {
        for(int k = j+1; k < n; k++) {
            if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff) {
                count++;
            }
        }
    }
}

        return count;
    }
};