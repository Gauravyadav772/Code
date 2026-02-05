class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int>result;
        int n=nums.size();
        for(int i=0;i<n;i++){
        if(nums[i]==0){
            result.push_back(nums[i]);
        }
        else if(nums[i]>0){
                int ans=nums[i];
                int val=(i+ans)%n;
                result.push_back(nums[val]);
        }
        else if(nums[i]<0){
            int first=abs(nums[i]);
            int sec=(i-first)%n;
            if(sec < 0) sec += n;
            result.push_back(nums[sec]);
        }

        }
        return result;
    }
};