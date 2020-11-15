#include <stdio.h>
#include "../../lib/binary.h"

int main() {
  printf("你好，世界\n");
  __int128_t num = 256;
  printBinary(&num, sizeof(num));
  return 0;
}
