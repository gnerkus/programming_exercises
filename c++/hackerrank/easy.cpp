#include "easy.h"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int max_of_four(int first, int second, int third, int fourth) {
  return std::max({first, second, third, fourth});
}

void update(int *a, int *b) {
  int aValue = *a;
  int bValue = *b;
  *a = aValue + bValue;
  *b = abs(aValue - bValue);
}

void reverse_array() {
  int count;
  int numArray[count];
  scanf("%d", &count);
  for (int i = 0; i < count; i++) {
    int numberInput;
    std::cin >> numberInput;
    numArray[count - i - 1] = numberInput;
  }

  for (int i = 0; i < count; i++) {
    std::cout << numArray[i] << " ";
  }
}
