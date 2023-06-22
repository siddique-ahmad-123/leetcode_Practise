class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> v;
       int index=0;
       int ans=-1;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        k--;
        solve(v,index,k,ans);

        return ans;


    }

    void solve(vector<int> v,int index,int k,int &ans){
        if(v.size()==1){
            ans=v[0];
            return;
        }
        index=(index+k)%v.size();
        v.erase(v.begin()+index);
        solve(v,index,k,ans);
    }
};