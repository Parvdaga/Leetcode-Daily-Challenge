class Solution {
public:
    int f(int idx,vector<int>& nums, vector<int> &dp){
        if(idx==0) return nums[idx];
        if(idx<0) return 0;
        if(dp[idx]!= -1) return dp[idx];
        int pick=nums[idx]+f(idx-2,nums,dp);
        int non= 0 +f(idx-1,nums,dp);
        dp[idx] = max(pick,non);
        return dp[idx];
    } 

    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return f(nums.size()-1,nums,dp);
    }
};