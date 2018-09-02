/* https://www.codewars.com/kata/554e4a2f232cdd87d9000038 */

#include <string>

std::string DNAStrand(const std::string& dna)
{
    std::string s(dna);
    for (size_t index=0;index<s.size();++index) {
        if (s[index] == 'A')
            s[index] = 'T';
        else if (s[index] == 'T')
            s[index] = 'A';
        else if (s[index] == 'C')
            s[index] = 'G';
        else if (s[index] == 'G')
            s[index] = 'C';
    }
    return s;
}
