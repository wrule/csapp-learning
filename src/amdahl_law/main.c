#include <stdio.h>

int main() {
  printf("请输入部件耗时占比[0~1]: ");
  double a = 0;
  scanf("%lf", &a);
  printf("请输入加速比例因子: ");
  double k = 0;
  scanf("%lf", &k);
  double result = 0;
  result = 1 / ((1 - a) + (a / k));
  printf("系统加速比为: %.4lf\n", result);
  return 0;
}
