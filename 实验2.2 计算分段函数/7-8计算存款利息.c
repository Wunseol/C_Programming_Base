#include <stdio.h>
#include <math.h>
int main()
{
    double m,y,r,i;
    scanf("%lf %lf %lf",&m,&y,&r);
    i=m*pow(1+r,y)-m;
    printf("interest = %.2lf",i);
    return 0;
}