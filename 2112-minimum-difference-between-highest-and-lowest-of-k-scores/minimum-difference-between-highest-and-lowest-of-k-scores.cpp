class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int  count=0;
        int ans=INT_MAX;
        sort(nums.begin(),nums.end());
              if(n==1){
                return 0;
              }
              for(int i=0;i+k-1<n;i++){
                 count=nums[i+k-1]-nums[i];
                 ans=min(count,ans);
              }
              return ans;
    }
};