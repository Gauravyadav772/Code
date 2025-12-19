class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long n = grid.size();
        long long N = n * n;

        long long actualSum = 0;
        long long actualSqSum = 0;

        // Calculate actual sum and square sum
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                actualSum += grid[i][j];
                actualSqSum += 1LL * grid[i][j] * grid[i][j];
            }
        }

        long long S = N * (N + 1) / 2;
        long long S2 = N * (N + 1) * (2 * N + 1) / 6;

        long long x = actualSum - S;      // a - b
        long long y = actualSqSum - S2;   // a^2 - b^2

        long long a = (x + y / x) / 2;
        long long b = a - x;

        return {(int)a, (int)b};
    }
};
