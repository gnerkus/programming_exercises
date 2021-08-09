/*
Your job is simple, if (x) squared is more than 1000, 
return 'It's hotter than the sun!!', 
else, 
return 'Help yourself to a honeycomb Yorkie for the glovebox.'.
*/
#include <assert.h>
#include <string.h>

const char *apple (int x)
{
  int square = x * x;
  if (square > 1000) {
    return "It's hotter than the sun!!";
  }

  return "Help yourself to a honeycomb Yorkie for the glovebox.";
}

int main() {
  assert(strncmp(apple(4), "Help yourself to a honeycomb Yorkie for the glovebox.", 54) == 0);
  assert(strncmp(apple(31), "Help yourself to a honeycomb Yorkie for the glovebox.", 54) == 0);
  assert(strncmp(apple(32), "It's hotter than the sun!!", 27) == 0);
  assert(strncmp(apple(60), "It's hotter than the sun!!", 27) == 0);
}

/*
Best practice: 4 Clever: 0

#include <math.h>
#include <stdio.h>

char *apple(int x)
{
  int square = pow(x, 2);
  return (square > 1000) ?  "It's hotter than the sun!!" : "Help yourself to a honeycomb Yorkie for the glovebox.";
}
*/

/*
Best practice: 4 Clever: 1

char *apple(int x)
{
    return (x * x > 1000) ? "It's hotter than the sun!!" : "Help yourself to a honeycomb Yorkie for the glovebox.";
}
*/

/*
Best practice: 0 Clever: 9

char *apple(int x)
{
    return x > 31 ? "It's hotter than the sun!!" : "Help yourself to a honeycomb Yorkie for the glovebox.";
}
*/
