#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

class Solution {
public:
  int maxProfit(std::vector<int> &prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
      if (price < minPrice) {
        minPrice = price;
      } else {
        int profit = price - minPrice;
        maxProfit = std::max(maxProfit, profit);
      }
    }

    return maxProfit;
  }
};

int main() {
  Solution solution;

  std::vector<int> prices = {7, 1, 5, 3, 6, 4};
  int profit = solution.maxProfit(prices);

  std::cout << "Maximum profit: " << profit << std::endl;

  return 0;
}

