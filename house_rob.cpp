class Solution {
public:

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);

        return solve(n-1,nums,dp);
       
    }
    int solve(int ind,vector<int>& nums,vector<int> &dp){
        int n = nums.size();

        if(ind==0)
        return nums[ind];

        if(ind<0)
        return 0;

        if(dp[ind]!=-1)
        return dp[ind];

        int pick=nums[ind]+solve(ind-2,nums,dp);
        int not_pick=solve(ind-1,nums,dp);

        return dp[ind]=max(pick,not_pick);
    }
};