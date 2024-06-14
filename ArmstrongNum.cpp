class Solution {
  public:
    string armstrongNumber(int n){
        int temp  = n;
        int digit;
        int sum = 0;
        
        while(n!=0){
            digit  = n%10;
            n/=10;
            sum+=(digit*digit*digit);
        }
        
        if(sum==temp){
            return "Yes";
        }else{
            return "No";
        }
    }
};
