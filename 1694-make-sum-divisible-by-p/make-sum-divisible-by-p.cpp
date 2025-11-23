class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total = 0;
        for (int x : nums) total = (total + x) % p;

        // Already divisible → remove empty subarray
        if (total == 0) return 0;

        unordered_map<int, int> mp;
        mp[0] = -1;   // Prefix before array starts

        long long prefix = 0;
        int ans = nums.size();

        for (int i = 0; i < nums.size(); i++) {

            prefix = (prefix + nums[i]) % p;

            long long need = (prefix - total + p) % p;

            if (mp.count(need)) {
                ans = min(ans, i - mp[need]);
            }

            mp[prefix] = i;
        }

        return ans == nums.size() ? -1 : ans;
    }
};
