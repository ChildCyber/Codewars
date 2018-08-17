/* https://www.codewars.com/kata/54edbc7200b811e956000556 */

#include <algorithm>
#include <vector>
using namespace std; 

int count_sheep(vector<bool> arr) 
{
  return count(arr.begin(), arr.end(), true);
}
