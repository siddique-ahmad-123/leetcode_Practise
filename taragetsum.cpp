class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(abs(target)>sum || (sum+target)%2!=0){
            return 0;
        }
        int s1=(sum+target)/2;

        return subset(nums,s1);
    }

    int subset(vector<int>& nums,int s1){
        int n= nums.size();
        int t[n+1][s1+1];
        t[0][0]=1;
        for(int i=1;i<s1+1;i++){
            t[0][i]=0;
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<s1+1;j++){
                if(nums[i-1]<=j)
                t[i][j]=t[i-1][j-nums[i-1]] + t[i-1][j];

                else
                t[i][j]=t[i-1][j];
            }
        }

        return t[n][s1];
    }
};