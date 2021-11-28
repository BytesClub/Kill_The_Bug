#include <stdio.h>

void main(void)
{
  char name[30];
  /* To do */
   //Take input from user
  gets(name); // This line will take an input from the user
  printf("Hello %s", &name);
  return 0;
}
