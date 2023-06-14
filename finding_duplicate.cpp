class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        int count=0;

        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second>=2)
            count=x.first;
        }

        return count;

    }
};