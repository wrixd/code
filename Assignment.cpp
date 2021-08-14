#include <stdio.h>
using namespace std;
int main()
{
int r,m;
m=r;

printf("enter the number of rows : ");
scanf("%d",&r);
for(int i=1;i<=r;i++)
{ 
    printf("\n");
         for(int j=r;j>=i;j--)
         {     
               printf(" %d ",j-i+1);
         } 
}
return 0;  
}