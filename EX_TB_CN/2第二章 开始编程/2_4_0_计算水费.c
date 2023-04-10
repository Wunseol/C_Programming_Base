#include <stdio.h>
int main()
{
    double x,y;

    printf("Enter x(x>=0):\n");
    // %lf的lf是long float 的意思
    // scanf 是格式化输入的意思
    scanf("%lf",&x);
    if (x <= 15) {
        y = 4*x/3;
    }else {
        y = 2.5*x - 10.5;
    }
    printf("y=f(%f)=%.2f\n",x,y);
    return 0;

}