class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        int l1 = 0,l2 = 0,n1 = arr1.size(),n2 = arr2.size(),ans = -1;
        while(k > 0){
            if(l1 < n1 && l2 < n2){
                if(arr1[l1] < arr2[l2]) ans = arr1[l1++];
                else ans = arr2[l2++];
            }
            else if(l1 < n1) ans = arr1[l1++];
            else ans = arr2[l2++];
            k--;
        }
        return ans;
    }
};
