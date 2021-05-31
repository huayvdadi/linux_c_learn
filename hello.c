#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int a[1000000];
  for (int i = 0; i < 1000000; i++) {
    a[i] = rand() % 10000;
  }
  int n = 0;
  for (int i = 0; i < 1000000; i++) {
    if (a[i] == 1)
      n++;
  }
  printf("1的频率是%d",n);
}