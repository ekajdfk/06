#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b)
{
  return a+b;
}

int square(int n)
{
  return n*n;
}

int get_max(int x, int y)
{
  if(x > y)
     return x;
  
  return y;
}

int main(int argc, char *argv[])
{
  int a, b;
  a = 3;
  b = 10;
  
  printf("sumTwo result : %i\n", sumTwo(a, b));
  printf("square result : %i\n", square(a));
  printf("get_max result : %i\n", get_max(a, b));
  
  system("PAUSE");	
  return 0;
}
