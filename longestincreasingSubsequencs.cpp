class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
       // memset(dp,-1,sizeof(dp));
        return solve(0,-1,nums,dp);
    }
    int solve(int ind,int prev_ind,vector<int> &nums,vector<vector<int>>&dp){
        int n= nums.size();

        if(ind==n)
        return 0;

        if(dp[ind][prev_ind+1]!=-1)
        return dp[ind][prev_ind+1];

        int len=0+solve(ind+1,prev_ind,nums,dp);
        if(prev_ind==-1 || nums[ind]>nums[prev_ind]){
            len=max(len,1+solve(ind+1,ind,nums,dp));
        }

        return dp[ind][prev_ind+1]=len;

    }
};