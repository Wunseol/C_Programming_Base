#include <stdio.h>
#include <math.h>

double dist( double x1, double y1, double x2, double y2 );

int main()
{    
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

double dist( double x1, double y1, double x2, double y2 )
{
    double result;
    result=pow(pow(y2-y1,2)+pow(x2-x1,2),0.5);
    return result;
}