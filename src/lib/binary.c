#include "binary.h"

const int ByteBinSize = 8;

void printByteBinary(uint8_t byte) {
  int binCodes[ByteBinSize];
  for (int i = 0; i < ByteBinSize; ++i) {
    binCodes[i] = byte >> i & 0x01;
  }
  printf("[");
  for (int i = ByteBinSize - 1; i >= 0; --i) {
    printf("%d", binCodes[i]);
  }
  printf("~");
  printf("0x%02x", byte);
  printf("~");
  printf("%d", byte);
  printf("]");
}

void printBinary(void *pt, int size) {
  const uint8_t *bytePt = pt;
  for (int i = 0; i < size; ++i) {
    unsigned char byte = *(bytePt + i);
    printByteBinary(byte);
    if (i < size - 1) {
      printf("-");
    }
  }
  printf("\n");
}
