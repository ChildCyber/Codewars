\* https://www.codewars.com/kata/515e271a311df0350d00000f *\

#include <vector>

int square_sum(const std::vector<int>& numbers)
{
    int sum = 0;
    for (int index = 0; index != numbers.size(); ++index)
        sum += numbers[index]  * numbers[index];
    return sum;
}
