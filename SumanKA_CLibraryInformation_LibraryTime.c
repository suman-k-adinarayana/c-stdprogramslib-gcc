#include <stdio.h>
#include <time.h>
 
int main(void)
{
  time_t timer = time(NULL);
  printf("current time is %s", ctime(&timer));
  return 0;
}