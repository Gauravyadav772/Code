class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp1, mp2;

        for (char c : ransomNote)
            mp1[c]++;

        for (char c : magazine)
            mp2[c]++;

        for (auto &p : mp1) {
            if (mp2[p.first] < p.second)
                return false;
        }

        return true;
    }
};
