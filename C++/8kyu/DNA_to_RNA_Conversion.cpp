/* https://www.codewars.com/kata/5556282156230d0e5e000089 */

#include <string>
#include <algorithm>
using namespace std;

std::string DNAtoRNA(std::string dna){
  std::replace(begin(dna), end(dna), 'T', 'U');
  return dna;
}
