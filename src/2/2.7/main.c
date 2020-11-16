#include <stdio.h>
#include <stdint.h>

/**
 * 判断无符号加法有没有发生溢出
 * 溢出返回0，没有溢出返回1
 **/
int uadd_ok(uint8_t a, uint8_t b) {
  uint8_t sum = a + b;
  printf("值为: %u\n", sum);
  return (sum < a || sum < b) ? 0 : 1;
}

int main() {
  printf("%d\n", uadd_ok(255, 255));
  return 0;
}
