/* https://www.codewars.com/kata/576b93db1129fcf2200001e6 */

#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int sum(vector<int> numbers)
{
    if (numbers.empty())
        return 0;
    if (numbers.size() == 1)
        return 0;
    numbers.erase(min_element(numbers.begin(), numbers.end()));
    numbers.erase(max_element(numbers.begin(), numbers.end()));
    return accumulate(numbers.begin(), numbers.end(), 0);
}
