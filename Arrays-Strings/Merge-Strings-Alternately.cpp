#include <iostream>
#include <queue>
#include <string>

class Solution {
public:
  std::string mergeAlternately(std::string word1, std::string word2) {
    std::queue<char> q1;
    std::queue<char> q2;

    std::string result = "";

    for (char c : word1) {
      q1.push(c);
    }

    for (char c : word2) {
      q2.push(c);
    }

    while (!q1.empty() || !q2.empty()) {
      if (q1.empty() && !q2.empty()) {
        char c = q2.front();
        result += c;
        q2.pop();
      }

      if (q2.empty() && !q1.empty()) {
        char c = q1.front();
        result += c;
        q1.pop();
      }

      if (!q1.empty() && !q2.empty()) {
        char c = q1.front();
        result += c;
        q1.pop();
        char c1 = q2.front();
        q2.pop();
        result += c1;
      }
    }

    std::cout << result;

    return result;
  }
};

int main() {
  Solution sol;
  sol.mergeAlternately("ab", "pqrs");
}
