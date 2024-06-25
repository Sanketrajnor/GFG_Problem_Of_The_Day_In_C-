class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat){
        int r=k%mat[0].size();
        vector<vector<int>>arr(mat.size(),vector<int>(mat[0].size(),0));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size()-r;j++){
                arr[i][j]=mat[i][j+r];
                
            }
        }
        for(int i=0;i<mat.size();i++){
            int k=r-1;
            for(int j=mat[0].size()-1;j>=mat[0].size()-r;j--){
                arr[i][j]=mat[i][k];
                k--;
                
            }
        }
        return arr;
        
    }
};
