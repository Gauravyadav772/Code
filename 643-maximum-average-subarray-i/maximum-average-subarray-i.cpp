class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int r=k-1;
        int l=0;
        for(l=0;l<k;l++){
            sum+=nums[l];
        }
        int maxSum =sum;
        l = 0;
       while(r < n-1){
            sum=sum-nums[l];
            l++;
            r++;
            sum=sum+nums[r];
            maxSum=max(maxSum,sum);
        }
    
    return double(maxSum) / k;
    }
};