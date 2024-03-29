class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int row, int col, int newcolor) {
       int inicolor=image[row][col];
      
        vector<vector<int>> ans=image;
        int delrow[]={1,0,-1,0};
        int delcol[]={0,1,0,-1};
       
        dfs(row,col,ans,image,inicolor,newcolor,delrow,delcol);

        return ans;

    }

    void dfs(int row,int col,vector<vector<int>> &ans,vector<vector<int>> &image,int inicolor,int newcolor,int delrow[],int delcol[]){
        ans[row][col]=newcolor;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==inicolor && ans[nrow][ncol]!=newcolor ){
                 dfs(nrow,ncol,ans,image,inicolor,newcolor,delrow,delcol);
            }
        }
    
    }
};