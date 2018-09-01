/* https://www.codewars.com/kata/553e8b195b853c6db4000048 */

#include <string>
#include <set>

bool hasUniqueChars(std::string s) {
  std::set<char> str_set;
  for (char c:s)
    str_set.insert(std::tolower(c));
  return str_set.size() == s.length();
}
