/* https://www.codewars.com/kata/55d24f55d7dd296eb9000030 */

int summation(int num){
 int sum = 0;
 for (int index = num; index != 0; --index)
  sum += index;
 return sum;
}
