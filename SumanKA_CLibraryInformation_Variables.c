#include <stdio.h>
#include<conio.h>
int main() {
  int MyNum_int      = 1947;
  float MyNum_float  = (22.0)/(7.0);
  double MyNum_double   = 10E6;
  printf("\nIndian Independence Day = %d\n",MyNum_int); // Nothing happens
  printf("\nValue of Pi = %f\n",MyNum_float); // Nothing happens
  printf("\nINR 1 Crore = %lf\n",MyNum_double); // Nothing happens
  getch();
  return 0;
}