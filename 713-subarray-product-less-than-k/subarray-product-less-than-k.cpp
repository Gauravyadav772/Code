class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        if(k==0){
            return 0;
        }
        for(int i=0;i<n;i++){
            int long long prod=1;
            for(int j=i;j<n;j++){
                prod=prod*nums[j];
                if(prod<k){
                    count++;
                }
                else{
                    break;
                }
            }
        }
        return count;
    }
};