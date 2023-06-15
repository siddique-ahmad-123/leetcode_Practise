class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n= nums.size();
        int count=0;
        int sum=0;
        unordered_map<int,int> mp;
        mp[0]=1;

        
        for(int i=0;i<n;i++){
           sum+=nums[i];
           int remainder=sum%k;

           //mp[remainder]++;

           if(remainder<0)
           remainder+=k;

           count+=mp[remainder];
           mp[remainder]++;
           

          

        


           
        }

        return count;
    }
};