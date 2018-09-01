/* https://www.codewars.com/kata/52fba66badcd10859f00097e */

#include <string>
#include <algorithm>

bool my_remove(char c) {
    std::string phonation("aeiouAEIOU");
    return (phonation.find(c) != std::string::npos);
}

std::string disemvowel(std::string str)
{
    str.erase(std::remove_if(str.begin(), str.end(), my_remove), str.end());
    return str;
}
