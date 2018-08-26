/* https://www.codewars.com/kata/57eae65a4321032ce000002d */

#include <string>

std::string fakeBin(std::string str){
  std::string fake;
  for (auto& s: str) {
    if ((int)s-48 < 5)
      fake += '0';
    else
      fake += '1';
  }
  return fake;
}
