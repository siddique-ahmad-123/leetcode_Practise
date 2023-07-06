class Solution {
public:
    int  t[101][10001];
    int solve(int e, int n){
        if(n==1 || n==0)
        return n;

        if(e==1)
        return n;

     if(t[e][n]!=-1)
     return t[e][n];
      
       int mn=INT_MAX;
     int l=1;
     int r=n;
       
        while(l<=r){
            int mid=l+(r-l)/2;
            int left=solve(e-1,mid-1);
            int right=solve(e,n-mid);
           int temp=1+max(left,right);
            if(left<right)
            l=mid+1;
            else
            r=mid-1;

            mn=min(mn,temp);

        }
           
            
        
        return t[e][n]=mn;


    }
    int superEggDrop(int e, int n) {
    memset(t,-1,sizeof(t));

        return solve(e,n);
        
    }
};