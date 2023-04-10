#include <stdio.h>
#include <math.h>
int main()
{
    int day;
    double factor,initial,result;

    printf("Enter initial:");
    scanf("%lf", &initial);
    printf("Enter factor:");
    scanf("%lf", &factor);
    printf("Enter day");
    scanf("%d", &day);

    result = initial*pow(1+factor,day);

    printf("result=%.2lf\n",result);

    return 0;

}