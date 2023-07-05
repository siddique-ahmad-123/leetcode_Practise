unordered_map<string,bool> mp;
class Solution {
public:
   
   bool solve(string s1, string s2){
       if(s1.compare(s2)==0)
       return true;

       if(s1.size()<=1)
       return false;

       string temp = s1;
       temp.push_back(' ');
       temp.append(s2);

       if(mp.find(temp)!=mp.end())
       return mp[temp];

       int n = s1.size();
       bool flag=false;
       for(int i=1;i<=n-1;i++){
           if((solve(s1.substr(0,i),s2.substr(n-i,i))==true && solve(s1.substr(i,n-i),s2.substr(0,n-i))==true) || (solve(s1.substr(0,i),s2.substr(0,i))==true && solve(s1.substr(i,n-i),s2.substr(i,n-i))==true)){
               flag=true;
               break;
           }
       }
       return mp[temp]=flag;
   }
    
    bool isScramble(string s1, string s2) {
       if(s1.size()!=s2.size())
       return false;

       if(s1==" " && s2==" ")
       return true;

       return solve(s1,s2);
        
    }

};