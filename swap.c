#include <stdio.h>  
void swap (int *a, int *b)  
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;  
    printf("After swapping values in function a = %d, b = %d\n",*a,*b);  
}
int main()  
{  
    int a = 1000;  
    int b = 44000;   
    printf("Before swapping the values in main a = %d, b = %d\n",a,b);  
    swap(&a,&b);  
    printf("After swapping values in main a = %d, b = %d\n",a,b); 
    return 0;
}  
  