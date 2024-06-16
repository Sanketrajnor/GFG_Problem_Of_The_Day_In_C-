class Solution {
  public:
  
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int d = 2; d * d <= num; d++) { // More efficient to go up to sqrt(num)
            if (num % d == 0) {
                return false;
            }
        }
        return true;
    }
    vector<int> getPrimes(int n) {
        for (int i = 2; i <= n / 2; i++) {
            if (isPrime(i) && isPrime(n - i)) {
                return {i, n - i};
            }
        }
        return {-1, -1};
    }
};
