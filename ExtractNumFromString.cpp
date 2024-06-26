class Solution {
public:
  long long ExtractNumber(string s) {
    int n = s.size();
    long long ans = -1; 

    for (int i = 0; i < n; i++) {
      if (!isdigit(s[i])) continue; 

      else {
        bool isNine = false; 
        long long Number = 0; 

        while (i < n && isdigit(s[i])) { 
          int digit = s[i] - '0';
          if (digit == 9) isNine = true;
          Number = Number * 10 + digit;
          i++;
        }

        if (!isNine) ans = max(ans, Number); 
      }
    }

    return ans;
  }
};
