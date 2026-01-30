
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            int left=nums[i];
            int right=nums[i+1];
            if(left!=right){
                left=left+1;
                right=right+1;
            }
            else  {
                count=left;;
                
            }
        }
        return count;
    }
};