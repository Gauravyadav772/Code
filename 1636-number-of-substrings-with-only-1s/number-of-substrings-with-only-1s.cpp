class Solution {
public:
    int numSub(string s) {
        long long mod = 1e9 + 7;
        long long count = 0, ans = 0;

        for (char c : s) {
            if (c == '1') {
                count++;  
            } else {
                ans = (ans + (count * (count + 1) / 2) % mod) % mod;
                count = 0;  
            }
        }

        ans = (ans + (count * (count + 1) / 2) % mod) % mod;

        return ans;
    }
};
