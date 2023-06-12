class Solution {
public:
     vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       // vector<vector<int>> ans;
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());

        set<int> s(candidates.begin(),candidates.end());
        candidates.assign(s.begin(),s.end());

        vector<int> v;
        
        fun(candidates,target,v,0);

        return ans;


    }

    void fun(vector<int> &candidates,int target, vector<int> &v,int i){

        if(target==0)
        ans.push_back(v);

        if(i==candidates.size())
        return;

        while(i<candidates.size() && (target-candidates[i])>=0){
            v.push_back(candidates[i]);
            fun(candidates,target-candidates[i],v,i);
            i++;
            v.pop_back();
        }

    }
};