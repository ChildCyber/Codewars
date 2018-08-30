/* https://www.codewars.com/kata/54ba84be607a92aa900000f1 */

#include <string>
#include <set>

bool is_isogram(std::string str) {
  std::set<char> str_set;
  for (char c:str)
    str_set.insert(std::tolower(c));
  return str_set.size() == str.length();
}
