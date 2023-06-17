class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<long long,long long >mp;
        long long i=0,j=0;
        long long  sum=0,temp=0;


        while(j<nums.size())
        {
           temp+=nums[j];
           mp[nums[j]]++;
           if(j-i+1!=k)
           j++;

           else if(j-i+1==k)
           {
               if(mp.size()==k)
               {
                   sum=max(temp,sum);
                   mp[nums[i]]--;
                   if(mp[nums[i]]==0)
                   mp.erase(nums[i]);
                   temp-=nums[i];
                   i++;
               }
               else
               {
                   while(mp.size()!=j-i+1)
                   {
                       mp[nums[i]]--;
                       if(mp[nums[i]]==0)
                        mp.erase(nums[i]);
                        temp-=nums[i];
                        i++;
                   }
               }
               j++;

           }
            
        }

        return sum;
    }
};