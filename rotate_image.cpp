class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        vector<vector<int>> ans=matrix;
        int s=0;
      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
          matrix[i][j]=ans[j][s];
          }
          s++;
      }

      for(int i=0;i<n;i++){
          reverse(matrix[i].begin(),matrix[i].end());
      }


    }
};