class Solution {
  public:
    vector<string> sortItems(int n, vector<string> &items) {
        sort(items.begin(), items.end(), [](const string &a, const string &b) {
            if (a.size() == b.size()) {
                return a < b; 
            }
            return a.size() < b.size();
        });
        return items;
    }
};
