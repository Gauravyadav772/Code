class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int answer = 0;

        for (int i = left; i <= right; i++) {
            int num = i;
            int count = 0;

            // count set bits
            while (num > 0) {
                if (num & 1) count++;
                num >>= 1;
            }

            // check if count is prime
            if (isPrime(count)) {
                answer++;
            }
        }
        return answer;
    }
};