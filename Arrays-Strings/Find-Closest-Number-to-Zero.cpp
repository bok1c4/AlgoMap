#include <cstdlib>
#include <vector>
class Solution {
public:
  int findClosestNumber(std::vector<int> &nums) {
    int result = nums[0];

    for (int val : nums) {
      int positive_value = std::abs(val);
      int current_closest = std::abs(result);

      if (positive_value < current_closest ||
          (positive_value == current_closest && val > result)) {
        result = val;
      }
    }

    return result;
  }
};

