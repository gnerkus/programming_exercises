#include "leap.h"

namespace leap {
  bool is_leap_year(int year) {
    if (year % 4 == 0) {
      if (year % 400 == 0) {
        return true;
      }

      if (year % 100 == 0) {
        return false;
      }

      return true;
    }

    return false;
  }
}

/*
COMMUNITY SOLUTION

#if !defined(LEAP_H)
#define LEAP_H

namespace leap
{
  inline bool is_leap_year(int year)
  {
    return (year % 100) ? (year % 4 == 0) : (year % 400 == 0);
  }
}

#endif
*/
