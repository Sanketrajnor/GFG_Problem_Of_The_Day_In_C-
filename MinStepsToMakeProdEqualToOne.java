class Solution {
    static int makeProductOne(int[] arr, int N) {
        int sum = 0,zeroes = 0,prod = 1;
        for(int i:arr){
            if(i<0) prod*=-1;
            sum+=Math.abs(Math.abs(i)-1);
            if(i==0) zeroes++;
        }
        if(prod<0)
          if(zeroes==0) sum+=2;
        return sum;
    }
};
