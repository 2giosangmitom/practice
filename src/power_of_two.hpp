#include <cmath>

class Solution {
public:
  bool isPowerOfTwo(int n) {
    if (n <= 0) {
      return false;
    }

    if (n == 1) {
      return true;
    }

    if (n % 2 != 0) {
      return false;
    }

    double need = log2(n);
    int t = need;
    return t == need;
  };
};
