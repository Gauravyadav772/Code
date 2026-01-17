class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int maxFreq = 0;
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
            maxFreq=max(maxFreq,mp[i] );
        }
       for(auto &p:mp){
        if(p.second==maxFreq){
            count+=p.second;
        }
       }
       return count;
    }
};