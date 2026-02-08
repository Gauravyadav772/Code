class Solution {
public:
    int numberOfSubstrings(string s) {
        int lastA = -1, lastB = -1, lastC = -1;
        int count = 0;

        for (int r = 0; r < s.size(); r++) {

            if (s[r] == 'a') lastA = r;
            if (s[r] == 'b') lastB = r;
            if (s[r] == 'c') lastC = r;

            if (lastA != -1 && lastB != -1 && lastC != -1) {
                int minIndex = min(lastA, min(lastB, lastC));
                count += minIndex + 1;
            }
        }

        return count;
    }
};

