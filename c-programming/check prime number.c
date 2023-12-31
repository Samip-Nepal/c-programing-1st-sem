
#include <stdio.h>

int main() {

  int n, i,m=0, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
m=n/2;

  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <=m; ++i) {

   
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

 
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}
