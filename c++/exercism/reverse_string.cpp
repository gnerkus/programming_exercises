#include "reverse_string.h"

namespace reverse_string {
std::string reverse(const std::string &source) {
  std::string reversed;
  for (auto it = source.rbegin(); it != source.rend(); it++) {
    reversed += *it;
  }

  return reversed;
}
} // namespace reverse_string

/**
COMMUNITY SOLUTION

inline std::string reverse_string(const std::string &src) {
    return std::string(src.rbegin(), src.rend());
}

*/