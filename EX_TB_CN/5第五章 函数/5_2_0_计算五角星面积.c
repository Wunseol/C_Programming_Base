#include <stdio.h>
#include <math.h>
double area(double x,double y,double z);
int main()
{
    double a1,a2,a3,a4,a5,a6,a7,s;

    printf("Please input 7 side lenths in the order a1 to a7:\n");
    scanf("%lf%lf%lf%lf%lf%lf%lf",&a1,&a2,&a3,&a4,&a5,&a6,&a7);
    s=area(a1,a5,a6)+area(a4,a6,a7)+area(a2,a3,a7);
    printf("The area of the Pentagon is %.2f\n",s);
    return 0;
}
double area(double x,double y,double z)
{
    double p=(x+y+z)/2;
    return sqrt(p*(p-x)*(p-y)*(p-z));
}