class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)
            if(nums[i]==nums[j]){
                count=nums[i];
            }        
        }
        return count;
    }
};