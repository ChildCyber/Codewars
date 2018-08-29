/* https://www.codewars.com/kata/5899dc03bc95b1bf1b0000ad */

#include <vector>
#include <algorithm>
#include <functional>

std::vector<int> invert(std::vector<int> values)
{
    std::transform(values.begin(), values.end(), values.begin(), std::negate<int>());
    return values;
}
