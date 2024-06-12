class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(arr1[i] == arr2[i]){
                ans = 0;
            }else{
                ans = i;
                break;
            }
        }
        return ans;
    }
};
