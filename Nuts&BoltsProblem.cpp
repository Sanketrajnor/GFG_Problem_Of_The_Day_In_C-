class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        vector<char> A(n);
        
        for(int i=0;i<n;i++)
        A[i]=nuts[i];
        
        sort(A.begin(),A.end());
        
        for(int i=0;i<n;i++)
        {
            nuts[i]=A[i];
            bolts[i]=A[i];
        }
    }
};
