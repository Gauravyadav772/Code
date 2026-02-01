class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int m = nums[0];
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;
        for (int i = 1; i < n; i++) {
            firstMin = min(firstMin, nums[i]);
        }

        int countMin = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] == firstMin) {
                countMin++;
                if (countMin > 1) {
                    secondMin = firstMin; 
                }
            } else {
                secondMin = min(secondMin, nums[i]);
            }
        }
        return m + firstMin + secondMin;
    }
};
