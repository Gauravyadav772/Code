class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        long long sum = 0;
        int count = 0;
        int minAbs = INT_MAX;  

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] < 0) {
                    count++;
                }
                sum += abs(matrix[i][j]);
                minAbs = min(minAbs, abs(matrix[i][j]));
            }
        }

        if (count % 2 == 1) {
            sum -= 2LL * minAbs;
        }

        return sum;
    }
};
