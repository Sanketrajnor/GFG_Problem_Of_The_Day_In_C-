class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 1){
                    continue;
                }
                //Left
                if(j-1>=0 && matrix[i][j-1] == 1) count++;
                
                //Right 
                if(j+1<m && matrix[i][j+1] == 1) count++;
                
                //Up
                if(i-1>=0 && matrix[i-1][j] == 1) count++;
                
                //Down
                if(i+1<n && matrix[i+1][j] == 1) count++;
            }
        }
        return count;
    }
};
