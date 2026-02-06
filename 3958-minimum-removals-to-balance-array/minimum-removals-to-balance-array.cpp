class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int first = 0;
        int count = 1;
        for (int second = 0; second < n; second++) {
            while ((long long)nums[second] > (long long)nums[first] * k) {
                first++;
            }
            count = max(count, second - first + 1);
        }
        return n - count;
    }
};