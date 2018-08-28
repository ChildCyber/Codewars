/* https://www.codewars.com/kata/57f781872e3d8ca2a000007e */

#include <algorithm>
#include <functional>

std::vector<int> maps(const std::vector<int> & values) {
  std::vector<int> cp(values);
  std::transform(cp.begin(), cp.end(), cp.begin(), [](int x){return x * 2;});
  return cp;
}
