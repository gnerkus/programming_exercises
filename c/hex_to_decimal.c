/*
Complete the function which converts hex number (given as a string) to a decimal number.
*/
#include <assert.h>
#include <math.h>

int hex_to_dec(const char *source) {
 return 0; // forfieted
}

int main() {
  assert(hex_to_dec("1") == 1);
  assert(hex_to_dec("a") == 10);
  assert(hex_to_dec("10") == 16);
}

/*
Best practice: 27 Clever: 13
#include <stdlib.h>

int hex_to_dec(const char *source) {
  return (int)strtol(source, NULL, 16);
}

Explanation:
long int strtol (const char* str, char** endptr, int base);

Convert string to long integer

Parses the C-string str interpreting its content as an integral number of the specified base, 
which is returned as a long int value. 
If endptr is not a null pointer, 
the function also sets the value of endptr to point to the first character after the number.
*/
