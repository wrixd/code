#include <stdio.h>
#include <stdlib.h>

float max,min,x_intercept,a,b,c,d;

float f(float x)
{
    float y=a*x*x*x+b*x*x+c*x+d;
    return(y);
}

int main()
{
    int i;
    printf("ax^3+bx^2+cx+d\n");
    printf("Enter a value of a,b,c,d\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    printf("Enter a bound\n");
    scanf("%f",&min);
    scanf("%f",&max);
    printf("Enter iteration\n");
    scanf("%d",&i);
    while(i>0)
    {
       x_intercept=(min*f(max)-max*f(min))/(f(max)-f(min));
       if((f(x_intercept)*f(max))<0)
        min=x_intercept;
       if((f(x_intercept)*f(min))<0)
        max=x_intercept;
     i--;
    }
    printf("%0.4f",x_intercept);
    return 0;
}