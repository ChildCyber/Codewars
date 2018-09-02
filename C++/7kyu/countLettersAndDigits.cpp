/* https://www.codewars.com/kata/5738f5ea9545204cec000155 */

#include <string>
#include <cctype>
#include <algorithm>

int countLettersAndDigits(std::string input)
{
    return std::count_if(input.begin(), input.end(), ::isalnum);
}
