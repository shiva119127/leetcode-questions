class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0;
        int end=k-1;
        double sum=0;
        double ans=0;
        for(int k=s;k<=end;k++){
            sum+=nums[k];
        }
        sum=sum/k;
        ans=sum;
        s=1;
        end=k;
        while(end<n){
            sum=((sum*k)-nums[s-1]+nums[end])/k;
            if(sum>ans){
                ans=sum;
            }
            s++;
            end++;
        }
        return ans;
    }
};