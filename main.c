#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
  int res = 1;
  int i;
  
  for(i=1; i<=n; i++)
        res = res*i;
        
  return res;  
}

int combination(int n, int r)
{
  int div1, div2;
  
  div1 = factorial(n);
  div2 = factorial(n-r)*factorial(r);
  
  return div1/div2;
}

int main()
{
  int n, r;
  int result;
  
  printf("input n : ");
  scanf("%d", &n);
  
  printf("input r : ");
  scanf("%d", &r);
  
  result = combination(n, r);
  printf("result is %i\n", result);
  
  system("PAUSE");
  return 0;
}
