class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff) {
        unordered_map<int,int>mp;
        int maxi=0;
        for(int i=0;i<arr.size();i++){
            int c=arr[i];
            if(mp.find(c-diff)!=mp.end())
            mp[c]=mp[c-diff]+1;

            else
            mp[c]=1;

            maxi=max(maxi,mp[c]);
        }
        return maxi;
    }
};