class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {

        int n=stones.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=stones[i];
        }
    return subsetsum(stones,sum);
       
     }

     int subsetsum(vector<int> &stones,int sum){
       /* int n=stones.size();
        int t[n+1][sum+1];
          
          for(int i=0;i<n+1;i++)
          t[0][i]=0;

          for(int i=0;i<sum+1;i++)
          t[i][0]=1;

          for(int i=1;i<n+1;i++){
              for(int j=1;j<sum+1;j++){
                  
                  if(stones[i-1]<=j)
                  t[i][j]=t[i-1][j-stones[i-1]] || t[i-1][j];
                  

                  else
                  t[i][j]=t[i-1][j];
              }
          }

          int ans=INT_MAX;

          for(int j=0;j<sum+1;j++){
              if(t[n][j]==true)
            ans=min(ans,abs(sum-2*j));

          }

          return ans;
        */
       int n=stones.size();
        vector<vector<bool>> dp(n + 1 , vector<bool>(sum / 2 + 1 , false));
    for (int i = 0 ; i < n + 1 ; i++) {
        dp[i][0] = true;
    }

    for (int i = 1 ; i < n + 1 ; i++) {
        for (int j = 1 ; j < sum / 2 + 1; j++) {
            if (stones[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - stones[i - 1]];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    int mx = -1;
    for (int j = 0 ; j < sum / 2 + 1 ; j++) {
        if (dp[n][j] == true)
            mx = j;
    }

    return sum - 2 * mx;
            
        }
    


};