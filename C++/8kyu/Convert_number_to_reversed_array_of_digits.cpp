/* https://www.codewars.com/kata/5583090cbe83f4fd8c000051 */

#include <string>
#include <vector>
#include <algorithm>

std::vector<int> digitize(unsigned long n) 
{        
  std::string str = std::to_string(n);
  std::reverse(str.begin(), str.end());
  std::vector<int> vec;
  for (auto pos = str.begin(); pos != str.end(); ++pos) {
    vec.push_back((int)*pos-48);
  }
  return vec;
}
