/* https://www.codewars.com/kata/53844152aa6fc137d8000589 */

using namespace std;

function<int (void)> always(int x) {
  return [=]() { return x; };
}
