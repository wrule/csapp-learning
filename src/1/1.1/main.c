#include <stdio.h>
#include "../../lib/binary.h"

int main() {
  int64_t num = 256;
  printBinary(&num, sizeof(num));
  char *text = "0123456";
  printBinary(text, 8);
  return 0;
}
