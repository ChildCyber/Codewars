/* https://www.codewars.com/kata/5715eaedb436cf5606000381 */

#include <vector>

int positive_sum (const std::vector<int> arr){
  int sum = 0;
  for (auto& x: arr)
    if (x >= 0)
      sum += x;
  return sum;
}
