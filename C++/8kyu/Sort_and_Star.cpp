/* https://www.codewars.com/kata/57cfdf34902f6ba3d300001e */

#include <string>
#include <algorithm>

std::string twoSort(std::vector<std::string> s)
{
    std::sort(s.begin(), s.end());
    std::string str;
    std::string s_first = *(s.begin());
    for (auto pos = s_first.begin(); pos < s_first.end(); ++pos) {
        if (pos == s_first.end() -1 ) {
            str += *pos;
        }
        else {
            str += *pos;
            str += "***";
        }
    }
    return str;
}
