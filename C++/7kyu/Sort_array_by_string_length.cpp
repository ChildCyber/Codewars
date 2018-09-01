/* https://www.codewars.com/kata/57ea5b0b75ae11d1e800006c */

#include <string>
#include <vector>
#include <algorithm>

class Kata
{
public:
    std::vector<std::string> sortByLength(std::vector<std::string> array)
    {
        std::sort(array.begin(), array.end(), [](std::string s1, std::string s2) { return s1.size() < s2.size(); });
        return array;
    }
};
