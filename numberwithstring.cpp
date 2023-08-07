class Solution {
public:
    
    void solve(string digits,vector<string> &ans,string mapping[],int ind,string output){
      int n = digits.size();

      if(ind>=n){
          ans.push_back(output);
          return;
      }

      int number = digits[ind] - '0';
      string value = mapping[number];
      for(int i=0;i<value.size();i++){
          output.push_back(value[i]);
          solve(digits,ans,mapping,ind+1,output);
          output.pop_back();
      }



    }
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        vector<string> ans;
         string output;
        int ind=0;
        if(n==0)
        return ans;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
       

        solve(digits,ans,mapping,ind,output);

        return ans;

    }

};