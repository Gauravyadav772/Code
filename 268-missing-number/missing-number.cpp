class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int product=0;
        for(int i=0;i<n;i++){
           sum+=nums[i];
        }
         product=n*(n+1)/2;
        int count=product-sum;
        return count;
    }
};