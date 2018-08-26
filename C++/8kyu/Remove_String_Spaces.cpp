/* https://www.codewars.com/kata/57eae20f5500ad98e50002c5 */

#include <algorithm>

std::string no_space(std::string x)
{
    std::string::iterator end_pos = std::remove(x.begin(), x.end(), ' ');
    x.erase(end_pos, x.end());
    return x;
}
