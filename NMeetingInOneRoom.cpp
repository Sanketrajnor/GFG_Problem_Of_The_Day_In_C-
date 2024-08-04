class Solution {
  public:
    int maxMeetings(int n, int start[], int end[])
    {
        vector<pair<int, int>> m;
        for (int i = 0; i < n; ++i) {
            m.push_back({end[i], start[i]});
        }
        sort(m.begin(), m.end());
        int count = 0;
        int last_end_time = -1;
    
        for (const auto& meeting : m) {
            int s = meeting.second;
            int e = meeting.first;
            if (s > last_end_time) {
                count++;
                last_end_time = e;
            }
        }
        return count;
    }
};
