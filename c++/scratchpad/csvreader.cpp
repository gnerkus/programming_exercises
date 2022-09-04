#include <string>
#include <iostream>
#include <sstream>

int main() {
  std::istringstream input;
  input.str("a,b,c,d\ne,f,g,h");
  for (std::string line; std::getline(input, line, ',');) {
	std::cout << line << '\n';
  }
}