class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;

       for(int i=0;i<=n;i++){
       int nums=i;
       int sum=0;
       
        while(nums!=0){
            sum+=nums%2;
            nums=nums/2;
        }
      ans.push_back(sum);
    }

      return ans;






       
    }
}