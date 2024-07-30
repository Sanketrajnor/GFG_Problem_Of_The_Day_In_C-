class Solution {
  private:
    vector<int> X = {-1,1,0,0};
    vector<int> Y = {0,0,-1,1};
    vector<string> res;
    string str = "";
    void DFS(int i, int j,vector<vector<int>> & mat,int& n,int& m){
        if(i==n-1 && j==m-1){
            res.push_back(str);
            return;
        }
        
        int original = mat[i][j];
        mat[i][j] = 0;

        for(int k=0; k<4; k++){
            int newX = X[k]+i;
            int newY = Y[k]+j;
            if(newX >= 0 && newY >= 0 && newX < n && newY < m
            && mat[newX][newY] == 1){
                    if(k==0) str += 'U';
                    else if(k==1) str += 'D';
                    else if(k==2) str += 'L';
                    else str += 'R';
                    
                    DFS(newX,newY,mat,n,m);
                    
                    str.pop_back();
                }
        }
        mat[i][j] = original;
    }
  public:
    vector<string> findPath(vector<vector<int>> &mat) {
        res.clear();
        int n = mat.size(),m=mat[0].size();
        if(mat[0][0] == 0 || mat[n-1][m-1] == 0) return res;
        DFS(0,0,mat,n,m);
        return res;
    }
};

