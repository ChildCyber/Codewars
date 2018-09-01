/* https://www.codewars.com/kata/580755730b5a77650500010c */

#include <string>
using namespace std;

string sortMyString(const string &s)
{
    string s1, s2;
    for (int pos=0; pos < s.size(); pos+=2) {
        s1 += s[pos];
    }
    for (int pos=1; pos < s.size(); pos+=2) {
        s2 += s[pos];
    }
    return s1 + " " + s2;
}
