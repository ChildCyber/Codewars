/* https://www.codewars.com/kata/576bb71bbbcf0951d5000044 */

#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    int pos = 0;
    int neg = 0;
    std::vector<int> v;
    if (!input.empty()) {
        for (auto& x: input)
            if (x > 0)
                pos += 1;
            else
                neg += x;
        v.push_back(pos);
        v.push_back(neg);
        return v;
    }
    else 
        return v;
}
