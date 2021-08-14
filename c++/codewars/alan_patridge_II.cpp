/*
Compile:
g++-10 alan_patridge_II.cpp -o alan
*/
#include <string>
#include <cassert>

using namespace std;

string apple(int x) {
  return x > 31 ? "It's hotter than the sun!!" : "Help yourself to a honeycomb Yorkie for the glovebox.";
}

int main() {
  assert(apple(4) == "Help yourself to a honeycomb Yorkie for the glovebox.");
  assert(apple(31) == "Help yourself to a honeycomb Yorkie for the glovebox.");
  assert(apple(32) == "It's hotter than the sun!!");
  assert(apple(60) == "It's hotter than the sun!!");
}