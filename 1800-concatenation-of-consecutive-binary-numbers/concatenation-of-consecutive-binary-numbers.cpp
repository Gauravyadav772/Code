class Solution {
public:
    int concatenatedBinary(int n) {
        long long result = 0;
        int len = 0;
        int mod = 1000000007;

        for(int i = 1; i <= n; i++) {

            if((i & (i - 1)) == 0) {
                len++; 
            }

            result = ((result << len) + i) % mod;
        }

        return result;
    }
};