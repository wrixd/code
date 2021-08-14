#include<stdio.h>
#include<string.h>
int main(){
printf("Enter two Strings :");
char str[1000],str2[1000];
scanf("%s",str);
scanf("%s",str2);

printf("\n1.Length\n2.Concatenate\n");
int num;
scanf("%d",&num);

switch (num)
{
case 1 :   if(strlen(str)==strlen(str2)){
             printf("\nLengths are  equal ");
           }else{
            printf("\nLengths are not equal "); 
             }
           break;
case 2 :  strcat(str,str2);
          printf("\n");
          puts(str);
default:
    break;
}



















}