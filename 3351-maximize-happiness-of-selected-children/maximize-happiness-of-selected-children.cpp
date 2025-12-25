class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());

        int n = happiness.size();
        long long count = 0;

        for (int i = n - 1; i >= 0 && k > 0; i--) {
            long long curr = happiness[i] - (n - 1 - i);
            if (curr > 0) {
                count += curr;
            }
            k--;
        }

        return count;
    }
};
