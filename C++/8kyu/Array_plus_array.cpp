/* https://www.codewars.com/kata/5a2be17aee1aaefe2a000151 */

#include <vector>
#include <numeric>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  return std::accumulate(a.begin(), a.end(), 0) + std::accumulate(b.begin(), b.end(), 0);
}
