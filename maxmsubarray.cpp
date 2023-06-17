#include <bits/stdc++.h>
using namespace std;

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



 long long n = nums.size();
         unordered_map<long long,long long> mp;
        long long i=0,j=0;
        long long sum=0;
        long long temp=0;
       
       
        
        while(j<nums.size()){
         sum+=nums[j];
         mp[nums[j]]++;

         if(j-i+1 != k)
         j++;

         else if(j-i+1 == k)
         {
             if(mp.size()==k){

                temp=max(temp,sum);
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                mp.erase(nums[i]);

                temp-=nums[i];
                i++;

             }
             else
             {

                 while(mp.size()!= j-i+1){
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

        return temp;