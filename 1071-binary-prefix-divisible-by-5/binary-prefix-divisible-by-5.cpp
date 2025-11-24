class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int count = 0; 

        for(int i = 0; i < nums.size(); i++) {
            count = (count * 2 + nums[i]) % 5;  
            ans.push_back(count == 0);          
        }

        return ans;
    }
};