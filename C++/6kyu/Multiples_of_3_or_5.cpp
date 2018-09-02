/* https://www.codewars.com/kata/514b92a657cdc65150000006 */

int solution(int number) 
{
  int sum = 0;
  for (int index = number - 1; index >= 3; --index) {
    if ((index % 3 == 0) || (index % 5 == 0))
      sum += index;
  }
  return sum;
}
