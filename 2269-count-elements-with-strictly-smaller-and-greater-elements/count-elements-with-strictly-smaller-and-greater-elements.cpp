class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
            int left=0;
            int right=n-1;  
            int count=0;;
        for(int i=1;i<n-1;i++){
            int val=nums[i];
            if(nums[left]<val && nums[right]>val){
               count++;
            }
            
        }
        return count;
    }
};