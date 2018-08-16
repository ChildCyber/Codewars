/* https://www.codewars.com/kata/544675c6f971f7399a000e79 */

#include <string>

int string_to_number(const std::string& s) {
  std::string s_copy(s);
  return atoi(s_copy.c_str());
}
