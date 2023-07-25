
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        int n = words.size();
        vector<string> ans;

        for(int i=0;i<n;i++){
          string s=words[i];
          string temp="";
          for(auto c:s){
              if(c==separator && temp!=""){
                  ans.push_back(temp);
                  temp="";
              }

              if(c!=separator)
              temp+=c;

          }
         if(temp!="")
          ans.push_back(temp);
        }

        return ans;
    }
}