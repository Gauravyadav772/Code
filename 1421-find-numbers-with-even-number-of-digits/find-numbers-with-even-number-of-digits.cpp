class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;

        for (int x : nums) {
            if ((x >= 10 && x <= 99) ||
                (x >= 1000 && x <= 9999) ||
                (x >= 100000 && x <= 999999)) {
                ans++;
            }
        }

        return ans;
    }
};
