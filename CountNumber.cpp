class Solution {
  public:
    int countNumberswith4(int n) {
        int cnt = 0;
        for(int j = 1; j <= n; j++){
            int i = j;
            while(i > 0){
                if(i % 10 == 4){
                    cnt++;
                    break;   
                }
                i/=10;   
            }
        }
        return cnt;
    }
};
