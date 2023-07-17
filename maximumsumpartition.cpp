class Solution {
public:

    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
       vector<int> dp(n,-1);

       return solve(arr,k,0,dp);
    }

    int solve(vector<int>& arr, int k,int ind,vector<int> &dp){
      int n = arr.size();
      if(n==ind)
       return 0;
       
       int maxi=INT_MIN;
       int maxans=INT_MIN;
       int len=0;
       int sum=0;
      
      if(dp[ind]!=-1)
      return dp[ind];
       

        for(int i=ind;i<min(n,ind+k);i++){
           len++;
          maxi=max(maxi,arr[i]);

          sum=(len*maxi) + solve(arr,k,i+1,dp);

          maxans=max(maxans,sum);
        }

        return dp[ind]=maxans;
    }
};