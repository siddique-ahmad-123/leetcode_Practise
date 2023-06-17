class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int sum=0;
        int maxm=nums[0];

        for(int i=0;i<n;i++){
           sum+=nums[i];
          
           maxm=max(maxm,sum);   

           if(sum<0)
           sum=0;

           
        }

        return maxm;
    }
};