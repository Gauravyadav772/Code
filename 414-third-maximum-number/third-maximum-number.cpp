class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int distinctCount = 1;          
        int maxVal = nums[n - 1];      
     for (int i = n - 2; i >= 0; i--) {
            if (nums[i] != nums[i +1]) {
                distinctCount++;
            }
           if (distinctCount == 3) {
                return nums[i];
            }
        }

        return maxVal;
    }
};
