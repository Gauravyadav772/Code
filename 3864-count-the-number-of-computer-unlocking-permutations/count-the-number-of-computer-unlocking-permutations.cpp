#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1000000007LL;

class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int n = (int)complexity.size();
        int mn = *min_element(complexity.begin(), complexity.end());

        // complexity[0] must be the unique minimum
        if (complexity[0] != mn) return 0;
        if (count(complexity.begin(), complexity.end(), mn) > 1) return 0;

        long long fact = 1;
        for (int i = 1; i <= n - 1; ++i) {
            fact = (fact * i) % MOD;
        }
        return (int)fact;
    }
};
