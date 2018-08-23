/* https://www.codewars.com/kata/56efc695740d30f963000557 */

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string to_alternating_case(const string& str)
{
  string s;
  size_t pos = 0;
  while (pos != str.length()) {
    if (isalpha(str[pos])) {
      if (islower(str[pos]))
        s += toupper(str[pos]);
      else if (isupper(str[pos]))
        s += tolower(str[pos]);
    }
    else
      s += str[pos];
    ++pos;
  }
  return s;
}
