class Solution {
public:
int result=INT_MAX;
int n;
    int distributeCookies(vector<int>& cookies, int k) {
     n = cookies.size();
        vector<int> children(k,0);

         solve(0,cookies,k,children);

         return result;
       
    }

    void solve(int ind,vector<int>& cookies,int k,vector<int> &children){
    
       if(ind>=n){
   int unfairness = *max_element(begin(children),end(children));
   result=min(result,unfairness);
   return;
        

       }

       int cookie=cookies[ind];
       for(int i=0;i<k;i++){
            children[i]+=cookie;
            solve(ind+1,cookies,k,children);
            children[i]-=cookie;
        }


    }
};