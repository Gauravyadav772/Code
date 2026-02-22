class Solution {
public:
    int binaryGap(int n) {
        string s = bitset<32>(n).to_string();
        
        int last = -1;
        int maxDist = 0;
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '1') {
                if(last != -1) {
                    maxDist = max(maxDist, i - last);
                }
                last = i;
            }
        }
        
        return maxDist;
    }
};