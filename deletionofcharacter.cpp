class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        int t[n+1][m+1];
        for(int i=0;i<n+1;i++){
           for(int j=0;j<m+1;j++){
               if(i==0 || j==0)
               t[i][j]=0;
           }
        }
       

        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(word1[i-1]==word2[j-1])
                t[i][j]=1+t[i-1][j-1];

                else
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        int ans1=n-t[n][m];
        int ans2=m-t[n][m];

        return ans1+ans2;
        
    }
};