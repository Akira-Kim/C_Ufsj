#include <stdio.h>

int main(){
  int a = 125, b = 12345;
  long ax = 1234567890;
  short s = 4043;
  float x = 2.13459;
  double dx = 1.1415927;
  char c = 'W';
  unsigned long ux = 2541567890;

  printf("\n%d %d",a, b);
  printf("\n%ld",ax);
  printf("\n%d",s);
  printf("\n%f",x);
  printf("\n%g",dx);
  printf("\n%c",c);
  printf("\n%lu",ux);

  return 0;
}

