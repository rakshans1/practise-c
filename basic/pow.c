#include <stdio.h>

int power(int m, int n);

main() {
  int i;

  for (i = 0; i < 15; i++) {
    printf("%d %d\n",i ,power(2, i));
  }
  return 0;
}

int power(int base, int n) {
  int i, p;
  p = 1;
  for (i = 0; i<n; i++ ) {
    p = p * base;
  }
  return p;
}
