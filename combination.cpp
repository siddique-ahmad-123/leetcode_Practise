class Solution {
public:
 vector<vector<int>> ans;

   void solve(int begin,int end,int k,vector<int>&subsets){
      if(subsets.size()==k){
          ans.push_back(subsets);
      }

      for(int i=begin;i<=end;i++){
          subsets.push_back(i);
          solve(i+1,end,k,subsets);
          subsets.pop_back();
      }
   }
    vector<vector<int>> combine(int n, int k) {
       vector<int> subsets;
       solve(1,n,k,subsets);

       return ans;
    }

    
};