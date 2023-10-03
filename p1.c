#include<stdio.h>
int main()
{
    double a,r,c;
    printf("enter the radius\n");
    scanf("%lf",&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("area=%lf\n Circumference=%lf",a,c);
    return 0;
}