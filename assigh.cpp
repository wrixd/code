#include <iostream>
using namespace std;
int main() {
   char ch='A';
   int i,j,n;
   printf("\nEnter the no of Rows : ");
   cout<<"\t ";
   scanf("%d",&n);
   for(i=1;i<=n;i++){
      for(j=1;j<=2*n-1;j++){
         if(j>=n-(i-1)&&j<=n+(i-1)){
            printf("  %c",ch++);

         }else{
            printf("  ");
         }
      }
      printf(" \n");
   }
   return 0;
}