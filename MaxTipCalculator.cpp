class Solution {
public:
    long long maxTip(int n, int x, int y, std::vector<int>& arr, std::vector<int>& brr) {
        std::vector<std::pair<int, int>> temp(n);
        for (int i = 0; i < n; ++i) {
            temp[i] = {std::abs(arr[i] - brr[i]), i};
        }

        std::sort(temp.begin(), temp.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            return a.first > b.first;
        });

        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            int index = temp[i].second;
            if (arr[index] > brr[index]) {
                if (x > 0) {
                    ans += arr[index];
                    x--;
                } else {
                    ans += brr[index];
                    y--;
                }
            } else {
                if (y > 0) {
                    ans += brr[index];
                    y--;
                } else {
                    ans += arr[index];
                    x--;
                }
            }
        }
        return ans;
    }
};
