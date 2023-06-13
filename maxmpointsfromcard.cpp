class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
       vector<int> sum(n,0);
       int Sum=0;
       for(int i=0;i<n;i++){
        Sum+=cardPoints[i];
        sum[i]=Sum;
       }
       if(n==k)
       return Sum;

        int ans=0;
        int score=0;
       for(int i=0;i<=k;i++){
           int j=i+(n-k-1);

           if(i==0)
            ans=sum[j];

          else{
          ans=sum[j]-sum[i-1];
          }
          score=max(score,Sum-ans);

       }
       return score;

    }
};