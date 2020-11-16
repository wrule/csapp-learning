#include <stdio.h>
#include "amdahl_law.h"

void testA() {
  double totalLen = 2500;
  double xLen = 1500;
  double normalSpeed = 100;
  double xSpeed = 150;
  double a = xLen / totalLen;
  double k = xSpeed / normalSpeed;
  printf("%.4lf\n", amdahl_law(a, k));
}

void testB() {
  double totalLen = 2500;
  double xLen = 1500;
  double normalSpeed = 100;
  double dst = 1.67;
  double a = xLen / totalLen;
  double k = a_amdahl_law(a, dst);
  printf("%.4lf\n", normalSpeed * k);
}

int main() {
  // testA();
  // testB();
  printf("请输入部件耗时占比[0~1]: ");
  double a = 0;
  scanf("%lf", &a);
  printf("请输入加速比例因子: ");
  double k = 0;
  scanf("%lf", &k);
  printf("系统加速比为: %.4lf\n", amdahl_law(0.6, 3.0));
  return 0;
}
