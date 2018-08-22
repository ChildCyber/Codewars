/* https://www.codewars.com/kata/54147087d5c2ebe4f1000805 */

void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{
  if (value) {
    func1();
  } else {
    func2();
  }
}
