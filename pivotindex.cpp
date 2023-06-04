class Solution {
public:
    int pivotIndex(vector<int>& nums) {

      int total=0;
      int leftsum=0;
      int rightsum=0;
      for(int i=0;i<nums.size();i++){
          total+=nums[i];
      }
      for(int i=0;i<nums.size();i++){
          rightsum=total-nums[i]-leftsum;
          if(leftsum==rightsum)
          return i;

          leftsum+=nums[i];

          rightsum=0;
      }
      return -1;


        
        
    }
};