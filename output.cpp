#include <stdio.h>

int main()
{
   int j=5,k=5,n;
   n = (++j) + (j=j+k);
   printf("%d\n", n);\
   return 0;
}