class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        int left=0;
        int count=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        for(int i=0;i<n-1;i++){
            left+=nums[i];
            int right=total-left;
            int res=left-right;
            if(res%2==0){
                count++;
            }
        }
        if(count==0){
            return 0;
        }
        return count;
        
    }
};