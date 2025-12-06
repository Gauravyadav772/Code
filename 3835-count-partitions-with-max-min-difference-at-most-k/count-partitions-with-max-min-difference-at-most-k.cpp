#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPartitions(vector<int>& nums, int k) {
        const int MOD = 1e9 + 7;
        int n = nums.size();
        
        vector<long long> dp(n+1), prefix(n+1);
        dp[0] = 1;
        prefix[0] = 1;
        
        deque<int> maxD, minD;
        int left = 0;
        
        for(int i = 0; i < n; i++){
            
            // maintain max deque
            while(!maxD.empty() && nums[maxD.back()] < nums[i])
                maxD.pop_back();
            maxD.push_back(i);
            
            // maintain min deque
            while(!minD.empty() && nums[minD.back()] > nums[i])
                minD.pop_back();
            minD.push_back(i);
            
            // adjust left pointer to maintain condition
            while(!maxD.empty() && !minD.empty() && 
                nums[maxD.front()] - nums[minD.front()] > k){
                
                if(maxD.front() == left) maxD.pop_front();
                if(minD.front() == left) minD.pop_front();
                left++;
            }
            
            // calculate dp
            dp[i+1] = prefix[i] - (left > 0 ? prefix[left-1] : 0);
            dp[i+1] = (dp[i+1] % MOD + MOD) % MOD;
            
            prefix[i+1] = (prefix[i] + dp[i+1]) % MOD;
        }
        
        return dp[n];
    }
};
