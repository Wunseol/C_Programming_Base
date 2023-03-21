#include <stdio.h>
#include <math.h>

int main()
{
    double n=1,i=1,a=1,sum=0,eps;
    scanf("%lf",&eps);
    if(eps>=1){
        printf("sum = %.6lf",n);
    }else{
        while(fabs(n)>eps){//C语言 fabs() 函数用于求双精度浮点数的绝对值。
            n=a*1/i;
            sum=sum+n;
            i=i+3;
            a=-a;
        }
        printf("sum = %.6lf",sum);
    }
    return 0;

}