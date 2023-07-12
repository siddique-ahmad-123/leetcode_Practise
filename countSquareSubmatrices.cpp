class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int t[m+1][n+1];
        

        for(int i=0;i<n;i++)
        t[0][i]=matrix[0][i];

        for(int i=0;i<m;i++)
        t[i][0]=matrix[i][0];

         
         for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0)
                 t[i][j]=0;
             
                else
               t[i][j] = 1 + min({t[i-1][j],t[i][j-1],t[i-1][j-1]});
                 
            }
        }
        int count=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                count+=t[i][j];
            }
        }

        return count;



        
    }
};