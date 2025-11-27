class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long prefix = 0;
        
         vector<long long> minPrefix(k, LLONG_MAX);
        minPrefix[0] = 0; 
        
        long long result = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            prefix += nums[i];
            int rem = (i + 1) % k; 
            
            
            if (minPrefix[rem] != LLONG_MAX) {
                result = max(result, prefix - minPrefix[rem]);
            }

            minPrefix[rem] = min(minPrefix[rem], prefix);
        }

        return result;
    }
};










