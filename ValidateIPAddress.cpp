class Solution {
  public:
    int isValid(string str) {
        int dots = 0;  // Counter for dots in the string
        string num = "";  // To build each segment
        
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '.') {
                // When we find a dot, validate the current segment
                if (num.empty() || num.size() > 3 || stoi(num) > 255 || (num.size() > 1 && num[0] == '0')) {
                    return false;  // Invalid segment found
                }
                num = "";  // Reset for the next segment
                dots++;  // Increase dot count
            } else {
                // Append digit to the current segment
                num += str[i];
            }
        }
        
        // Validate the last segment after the loop
        if (num.empty() || num.size() > 3 || stoi(num) > 255 || (num.size() > 1 && num[0] == '0')) {
            return false;  // Invalid last segment
        }
        
        // Check if there are exactly 3 dots
        return dots == 3;
    }
};
