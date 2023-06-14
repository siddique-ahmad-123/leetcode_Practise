class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int> a;
        for(int i=0;i<n;i++){
             a[nums[i]]++;
        }
        for(auto x:a){
            if(k==0){
                if(x.second>1)
            count++;
            }

            else if(a.find(x.first+k)!=a.end())
            {
               
                count++;
            }

        }

        return count;


    }
};