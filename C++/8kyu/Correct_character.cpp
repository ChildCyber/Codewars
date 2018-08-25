/* https://www.codewars.com/kata/577bd026df78c19bca0002c0 */

#include <string>

std::string correct(std::string str){
  for (int s=0; s<str.length(); ++s) {
    if (str[s] == '1')
      str.replace(s, 1, "I");
    if (str[s] == '0')
      str.replace(s, 1, "O");
    if (str[s] == '5')
      str.replace(s, 1, "S");
  }
  return str;
}
