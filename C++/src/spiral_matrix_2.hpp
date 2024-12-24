#include <vector>
using namespace std;

class Solution {
public:
  vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> result(n, vector<int>(n));
    int layer = 0;
    int k = 1;
    while (layer < (n + 1) / 2) {
      for (int i = layer; i < n - layer; i++) {
        result[layer][i] = k++;
      }
      for (int i = layer + 1; i < n - layer; i++) {
        result[i][n - layer - 1] = k++;
      }
      for (int i = n - 2 - layer; i >= layer; i--) {
        result[n - layer - 1][i] = k++;
      }
      for (int i = n - 2 - layer; i > layer; i--) {
        result[i][layer] = k++;
      }
      layer++;
    }

    return result;
  };
};
