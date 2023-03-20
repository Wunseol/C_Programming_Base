#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;
    double area,perimeter,s;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a){
        s=(a+b+c)/2.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        perimeter=a+b+c;
        printf("area = %.2lf; perimeter = %.2lf",area,perimeter);
    }else{
        printf("these sides do not correspond to a valid triangle");
    }
    return 0;

}