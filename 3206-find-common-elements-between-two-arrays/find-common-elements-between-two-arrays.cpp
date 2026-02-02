class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            mp1[nums1[i]]++;
        }
        for(int i=0;i<m;i++){
            mp2[nums2[i]]++;
        }
        
        for(int x:nums1){
            if(mp2.count(x)){
                count1++;
            }
        }
            for(int x:nums2){
            if(mp1.count(x)){
                count2++;
            }
        }
        return {count1,count2};
    }
};