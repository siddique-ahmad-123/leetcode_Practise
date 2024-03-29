class Solution {
public:
    bool isSubsequence(string s, string t) {

        int n=s.size();
        int m=t.size();
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
               dp[i][j]=false;
           }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(s[i-1]==t[j-1])
                dp[i][j]= 1 + dp[i-1][j-1];

                else
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
         if(dp[n][m]==n)
         return true;

         else
         return false;
        
    }
};