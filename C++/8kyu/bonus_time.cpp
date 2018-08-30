/* https://www.codewars.com/kata/56f6ad906b88de513f000d96 */

#include<string>
using namespace std;

string bonus_time(int salary, bool bonus)
{
    if (bonus)
        return "$" + to_string(salary * 10);
    else
        return "$" + to_string(salary);
}
