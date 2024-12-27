#include <climits>
#include <string>
using namespace std;

class Solution {
public:
  int myAtoi(string s) {
    int i = 0, n = s.length();

    // Skip leading white spaces
    while (i < n && s[i] == ' ') {
      i++;
    }

    if (i == n)
      return 0; // If string contains only spaces

    // Determine the sigIn
    int sign = 1;
    if (s[i] == '+' || s[i] == '-') {
      sign = (s[i] == '-') ? -1 : 1;
      i++;
    }

    int result = 0;

    while (i < n && isdigit(s[i])) {
      int digit = s[i] - '0';

      // Check for overflow before updating `result`
      if (result > (INT_MAX - digit) / 10) {
        return (sign == 1) ? INT_MAX : INT_MIN;
      }

      result = result * 10 + digit;
      i++;
    }

    return result * sign;
  }
};
