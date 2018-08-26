/* https://www.codewars.com/kata/57f24e6a18e9fad8eb000296 */

#include <string>
#include <vector>

std::string how_much_i_love_you(int nb_petals) {
  std::vector<std::string> lst {
    "I love you",
    "a little",
    "a lot",
    "passionately",
    "madly",
    "not at all"
  };
  return lst[(nb_petals - 1) % 6];
}
