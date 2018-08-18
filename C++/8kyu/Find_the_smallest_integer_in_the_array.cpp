/* https://www.codewars.com/kata/55a2d7ebe362935a210000b2 */

#include <vector>
#include <algorithm>

using namespace std; 

int findSmallest(vector <int> list)
{
  return *min_element(list.begin(), list.end());
}
