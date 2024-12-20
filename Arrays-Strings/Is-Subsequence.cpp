#include <queue>
#include <string>
class Solution {
public:
  bool isSubsequence(std::string s, std::string t) {
    std::queue<char> queue;
    for (char c : s) {
      queue.push(c);
    }

    for (char c : t) {
      char curr = queue.front();
      if (curr == c) {
        queue.pop();
      }
    }

    if (queue.empty()) {
      return true;
    }
    return false;
  };
};

int main() {
  Solution solution;
  solution.isSubsequence("kurac", "u usta");
  return 0;
}
