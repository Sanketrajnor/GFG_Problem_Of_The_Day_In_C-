class Solution {
  public:
    int rectanglesInCircle(int r) {
        // code here
         int count = 0;
        int limit = 2 * r;

        for (int w = 1; w <= limit; ++w) {
            for (int h = 1; h <= limit; ++h) {
                if (w * w + h * h <= 4 * r * r) {
                    count++;
                }
            }
        }

        return count;
    }
};
