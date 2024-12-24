class Solution {
public:
  // You can read this article: https://en.wikipedia.org/wiki/Digital_root
  int addDigits(int num) {
    if (num == 0) {
      return 0;
    }
    return 1 + ((num - 1) % 9);
  };
};
