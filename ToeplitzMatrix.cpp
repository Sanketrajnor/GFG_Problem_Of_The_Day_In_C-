bool isToepliz(vector<vector<int>>& mat) {
    // code here
    int n=mat.size();
    int m=mat[0].size();
    for(int k=0; k<m; ++k){
        int i=0, j=k;
        int val=0;
        while(i<n && j<m){
            if(val==0){
                val=mat[i][j];
            }else if(val!=mat[i][j]){
                return false;
            }
            ++i; ++j;
        }
    }
    for(int k=1; k<n; ++k){
        int i=k,j=1;
        int val=0;
        while(i<n && j<m){
            if(val==0){
                val=mat[i][j];
            }else if(val!=mat[i][j]){
                return false;
            }
            ++i; ++j;
        }
    }
    return true;
}
