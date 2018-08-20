/* https://www.codewars.com/kata/563e320cee5dddcf77000158 */

#include <numeric>
using namespace std;

int get_average(std::vector <int> marks)
{
  int sum = accumulate(marks.begin(), marks.end(), 0);
  return sum / marks.size();
}
