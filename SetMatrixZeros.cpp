class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int col0=1,rows=mat.size(),cols=mat[0].size();
        for(int i=0;i<rows;i++){
            if(mat[i][0]==0)
                col0=0;
            for(int j=1;j<cols;j++){
                if(mat[i][j]==0)
                    mat[i][0]=mat[0][j]=0;
            }
        }
        for(int i=rows-1;i>=0;i--){
            for(int j=cols-1;j>=1;j--){
                if(mat[i][0]==0 || mat[0][j]==0)
                    mat[i][j]=0;
            }
            if(col0==0) 
                mat[i][0]=0;
        }
    }
};
