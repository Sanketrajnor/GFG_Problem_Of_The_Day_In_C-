class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
       int i =0,j=0,n =arr.size();
        while(j < n)
        {
            if(arr[j] == 0)
            {
                swap(arr[i],arr[j]);
                i++;
            }
            j++;
        }
    }
};
