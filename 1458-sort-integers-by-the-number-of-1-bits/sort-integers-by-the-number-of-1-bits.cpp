class Solution {
public:
    
    int countBits(int n) {
        int count = 0;
        while(n > 0) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }

    vector<int> sortByBits(vector<int>& arr) {
        
        sort(arr.begin(), arr.end(), [this](int a, int b) {
            int bitA = countBits(a);
            int bitB = countBits(b);

            if(bitA == bitB)
                return a < b;
            
            return bitA < bitB;
        });

        return arr;
    }
};