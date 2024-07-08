class Solution {
  public:
    int search(vector<int>& arr, int key) {
       int n=arr.size();
        int i=0,j=n-1;
        while(i<=j){
            if(arr[i]==key ) return i;
           if(arr[j]==key) return j;
           i++;
           j--;
        }
        return -1;
    }
};
