class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
       // int maxm=0;
       int MaxArea=0;
       int i=0;
       int j=n-1;
       int area=0;

       while(i<j){
           if(height[i]>height[j]){
             area=(j-i)*height[j];
             j--;
           }
           else if(height[i]==height[j]){
               area=(j-i)*height[i];
               i++;
               j--;
           }

           else
           {
               area=(j-i)*height[i];
               i++;
           }

           MaxArea=max(MaxArea,area);
       }
       
       
        return MaxArea;

       
        
    }
};