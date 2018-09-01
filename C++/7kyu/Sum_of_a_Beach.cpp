/* https://www.codewars.com/kata/5b37a50642b27ebf2e000010 */

#include <string>
#include <algorithm>
using namespace std;

size_t stringCount(const string& referenceString,
                   const string& subString) {

    const size_t step = subString.size();

    size_t count(0);
    size_t pos(0) ;

    while( (pos=referenceString.find(subString, pos)) !=string::npos) {
        pos +=step;
        ++count ;
    }

    return count;
}

int sum_of_a_beach(string s)
{
    int sum = 0;
    string str(s);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sum += stringCount(str, "sand");
    sum += stringCount(str, "water");
    sum += stringCount(str, "fish");
    sum += stringCount(str, "sun");
    return sum;
}
