class Solution {
public:
     int dp[501][502];
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        memset(dp,-1,sizeof(dp));

        return solve(0,n-1,piles)>0;
    }

    int solve(int i,int j,vector<int>& piles){
        if(i>j)
        return 0;

        if(dp[i][j]!=-1)
        return dp[i][j];

        return  dp[i][j]=max(piles[i]-solve(i+1,j,piles),piles[j]-solve(i,j-1,piles));
    }
};