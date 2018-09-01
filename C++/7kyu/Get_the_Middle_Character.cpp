/* https://www.codewars.com/kata/56747fd5cb988479af000028 */

#include <string>

std::string get_middle(std::string input) 
{
    if (input.size() == 1)
        return input;
    if (input.size() % 2 == 1) {
        int mid = input.size() / 2;
        return std::string(1, input[mid]);
    }
    else {
        int mid = input.size() / 2;
        return input.substr(mid - 1, 2);
    }
}
