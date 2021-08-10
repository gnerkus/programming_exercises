/*
Implement a function which convert the given boolean value into its string representation.
*/

#include <stdbool.h>
#include <assert.h>
#include <string.h>

//The returned string should be statically allocated and it won't be freed
const char *boolean_to_string(bool b)
{
  return b ? "true" : "false";
}

int main() {
  assert(strncmp(boolean_to_string(true), "true", 4) == 0);
  assert(strncmp(boolean_to_string(false), "false", 5) == 0);
}

/*
Best practice: 0 Clever: 6

const char *boolean_to_string(_Bool b) {
  return "false\0true" + b * 6;
}

Explanation:
A string is a character array. Adding an int to a string moves the starting point
of the character array. So:
"false" + 0 // "false"
"false" + 2 // "lse"
"false" + 4 // "e"
\0 is the termination of a string; any character after this is not printed
*/

/*

*/
