class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n=nums.size();
        int ans=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            int remSum=sum-k;
            if(mp[remSum])
               ans+=mp[remSum];

               mp[sum]+=1;

            }
            return ans;

            
        

        
        
    }
};