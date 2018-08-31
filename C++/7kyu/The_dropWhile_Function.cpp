/* https://www.codewars.com/kata/54f9c37106098647f400080a */

#include <vector>
#include <algorithm>

std::vector<int> dropWhile(std::vector<int> arr, std::function<bool (int)> pred)
{
    std::vector<int> result;
    for (auto pos = arr.begin(); pos != arr.end(); ++pos) {
      if (!pred(*pos)) {
        result.assign(pos, arr.end());
        return result;
      }
    }
    return result;
}
