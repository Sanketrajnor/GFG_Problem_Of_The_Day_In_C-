class Solution {
public:
    bool canAccommodate(int maxWait, int n, int m, int k, vector<int>& arrival) {
        int sessions = 1;
        int firstArrival = arrival[0];
        int geeksInCurrentSession = 0;

        for (int i = 0; i < n; ++i) {
            if (geeksInCurrentSession == k || (arrival[i] - firstArrival) > maxWait) {
                ++sessions;
                firstArrival = arrival[i];
                geeksInCurrentSession = 0;
            }
            if (sessions > m) {
                return false;
            }
            ++geeksInCurrentSession;
        }
        return true;
    }

     int minimizeWaitingTime(int n, int m, int k, vector<int>& arrival) {
        sort(arrival.begin(), arrival.end());

        int left = 0;
        int right = arrival[n - 1] - arrival[0];
        int result = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canAccommodate(mid, n, m, k, arrival)) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return result;
     }
};
