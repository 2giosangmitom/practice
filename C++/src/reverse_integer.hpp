#include <climits>
using namespace std;

class Solution {
public:
  int reverse(int x) {
    int result = 0;

    while (x != 0) {
      int lastDigit = x % 10;

      // Check for overflow/underflow before updating result
      if (result > INT_MAX / 10 || (result == INT_MAX / 10 && lastDigit > 7)) {
        return 0;
      }
      if (result < INT_MIN / 10 || (result == INT_MIN / 10 && lastDigit < -8)) {
        return 0;
      }

      result = result * 10 + lastDigit;
      x /= 10;
    }

    return result;
  }
};
