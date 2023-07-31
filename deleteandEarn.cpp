class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
       vector<int> dp(n+1,-1);
        

        return solve(0,nums,dp);

        
    }
    int solve(int ind, vector<int> &nums,vector<int>&dp){
        int n = nums.size();
        if(ind>=n)
        return 0;

        
        int currsum=nums[ind];
        int currvalue=nums[ind];
        int i=ind+1;
       
       while(i<n && nums[i]==currvalue){
           currsum+=nums[i];
           i++;
       }
       while(i<n && nums[i]==currvalue+1)
       i++;
        
       if(dp[ind]!=-1)
       return dp[ind];

        int pick=currsum+solve(i,nums,dp);
        int not_pick=solve(ind+1,nums,dp);

         return dp[ind]=max(pick,not_pick);
    }
};