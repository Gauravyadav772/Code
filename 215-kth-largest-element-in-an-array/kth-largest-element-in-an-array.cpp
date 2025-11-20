class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       int n=nums.size();
       int end=0;
       sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            end=n-k;
            
        }
        return nums[end];
    }
};