class Solution {
public:
    void dfs(int n, int m, int row, int col, vector<vector<int>>&ans,vector<vector<int>>&image, int initial_color, int delrow[],int delcol[],int color){
        ans[row][col]=color;
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==initial_color && ans[nrow][ncol]!=color){
            dfs(n,m,nrow,ncol,ans,image,initial_color,delrow,delcol,color);

            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>> ans=image;
        int initial_color=image[sr][sc];
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        dfs(n,m,sr,sc,ans,image,initial_color,delrow,delcol,color);
        return ans;
    }
};