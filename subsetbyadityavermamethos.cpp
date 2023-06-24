class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n= nums.size();
       vector<vector<int>> ans;
       vector<int>op(0);
       vector<int> ip=nums;
      // vector<int> v;
       solve(ip,op,ans);


       return ans;   
    }
    void solve(vector<int> ip,vector<int> op,vector<vector<int>> &ans){
        if(ip.size()==0){
            ans.push_back(op);
            return;
        }

        vector<int> op1=op;
        vector<int>op2=op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op1,ans);
        solve(ip,op2,ans);
       // return;
    }
};