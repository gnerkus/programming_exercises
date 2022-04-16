#include "leap.h"
#include <iostream>

int main() {
  std::cout << leap::is_leap_year(2015) << std::endl;
  std::cout << leap::is_leap_year(2000) << std::endl;
  return 0;
}
