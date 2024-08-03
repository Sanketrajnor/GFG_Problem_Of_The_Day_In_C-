int celebrity(vector<vector<int> >& mat) {
        // code here
        int n=mat.size();
        for(int i=0;i<n;i++){
            int j=0;
            for(;j<n;j++){
                if(mat[i][j]==1) break;
            }
            if(j==n){
                for(j=0;j<n;j++){
                    if(i!=j && mat[j][i]==0) break;
                }
                if(j==n) return i;
            }
        }
        return -1;
    }
