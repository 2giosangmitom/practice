#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
  string addBinary(const string &a, const string &b) {
    int len_a = a.size();
    int len_b = b.size();

    int i = len_a - 1;
    int j = len_b - 1;
    int carry = 0;

    string result;

    while (i >= 0 || j >= 0 || carry > 0) {
      int bit1 = (i >= 0) ? a[i--] - '0' : 0;
      int bit2 = (j >= 0) ? b[j--] - '0' : 0;

      int sum = bit1 + bit2 + carry;
      result += (sum % 2) + '0';
      carry = sum / 2;
    }

    reverse(result.begin(), result.end());
    return result;
  }
};
