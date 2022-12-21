#include "reverse_string.h"

namespace reverse_string {
std::string reverse(const std::string &source) {
  std::string reversed;
  for (auto it = source.end(); it != source.begin(); --it) {
    reversed += *it;
  }

  return reversed;
}
} // namespace reverse_string