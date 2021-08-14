/*
Given a string, return a copy of the string with the vowels' case swapped.

For this kata, assume that vowels are in the set "aeouiAEOUI".

Example: Given a string "C is alive!", your function should return "C Is AlIvE!"

Addendum: Your solution is only required to work for the ASCII character set.

Please make sure you only swap cases for the vowels.
*/
#include <string>
#include <cassert>

using namespace std;

string swap_vowel_case(string s) {
    string vowels = "aeiou";
    string cap_vowels = "AEIOU";

    int N = s.length();
    for (int i = 0; i < N; i++) {
        if (vowels.find(s[i]) != string::npos) {
            s[i] = toupper(s[i]);
        } else if (cap_vowels.find(s[i]) != string::npos) {
            s[i] = tolower(s[i]);
        }
    }

    return s;
}


int main() {
    assert(swap_vowel_case(" ") == " ");
    assert(swap_vowel_case("aeiob") == "AEIOb");
    assert(swap_vowel_case("C Is AlIvE!") == "C is alive!");
    assert(swap_vowel_case("to") == "tO");
    assert(swap_vowel_case("The") == "ThE");
}

/*
Best practice: 0, Clever: 2

#include <string>

std::string swap_vowel_case(std::string s) {
  static std::string S = "aiueoAIUEO";
  for (auto &x : s) if (S.find(x) < 10) x ^= 32;
  return s;
}
*/
