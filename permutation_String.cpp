class Solution {
public:
    vector<string> ans;
    string st;
    void solve(int i){
         if(i==st.size()){
             ans.push_back(st);
             return; 
         }

         if(isalpha(st[i])){
             st[i]=toupper(st[i]);
             solve(i+1);
             st[i]=tolower(st[i]);
             solve(i+1);
         }

         else
         solve(i+1);
    }
    vector<string> letterCasePermutation(string s) {
        
       st=s;
       solve(0);

       return ans;
        
    }
};