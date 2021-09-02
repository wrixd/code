#include<stdio.h>
#include<math.h>
float l,m,n,o;
double f(double x)
{
    return  l*pow(x,3)+m*pow(x,2)+n*x+o;
}
double f1(double x)
{
   return 3*l*pow(x,2)+2*m*x+n;
}
int main()
{
    printf("\n ENTER THE COEFFICIENTS OF THE TERMS \n");
    scanf("%f",&l);
    scanf("%f",&m);
    scanf("%f",&n);
    scanf("%f",&o);
    double a,e,b;
    printf("ENTER THE INITIAL GUESS\n");
    scanf("%lf",&a);
    while(f1(a)==0)
    {
        printf("THE VALUE OF FIRST DERIVATIVE AT THE GIVEN POINT EQUALS '0' KINDLY ENTER OTHER VALUE");
        scanf("%lf",&a);
    }

    printf("\n ENTER THE TOLERABLE ERROR");
    scanf("%lf",&e);

    printf("\nStep\t\t\tx\t\tf(x)\n");
    int i=1;
    double h;
    h=f(a)/f1(a);
    do
    {
        a=a-h;
        printf("%d\t\t%lf\t\t%lf\n",i, a, f(a));
        h=f(a)/f1(a);
        i++;

    }while(fabs(f(a))>e&&i<100&&f1(a)!=0);
    printf("\nRoot is: %lf", a);
    return 0;
}