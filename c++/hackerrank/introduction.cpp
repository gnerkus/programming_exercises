#include "introduction.h"
#include <algorithm>
#include <array>
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

void variable_length_array() {
  /**

  */
  int leafArrayCount, queryCount;
  std::vector<std::vector<int>> rootArray;

  std::cin >> leafArrayCount;
  std::cin >> queryCount;

  for (int i = 0; i < leafArrayCount; i++) {
    int arraySize;
    std::vector<int> leafArray;

    std::cin >> arraySize;

    for (int j = 0; j < arraySize; j++) {
      int item;
      std::cin >> item;
      leafArray.push_back(item);
    }

    rootArray.push_back(leafArray);
  }

  for (int i = 0; i < queryCount; i++) {
    int rootIndex, leafIndex;
    std::cin >> rootIndex;
    std::cin >> leafIndex;

    std::cout << rootArray[rootIndex][leafIndex] << std::endl;
  }
}
