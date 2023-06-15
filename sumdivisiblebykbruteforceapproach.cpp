class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int> v(n,0);
        int count=0;
        
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
               sum+=nums[j];
               v[j]=sum;
               if(v[j]%k==0)
               count++;

            }
        }

        return count;
    }
};