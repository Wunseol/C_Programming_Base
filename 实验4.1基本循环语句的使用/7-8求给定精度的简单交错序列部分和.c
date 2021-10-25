#include <stdio.h>
#include <math.h>
int main()
{
    double n=1.0,i=1.0,a=1.0,sum=0.0,eps;
    scanf("%lf",&eps);
    if(eps>=1){
        printf("sum = %.6lf",n);
    }
    else{
        while(fabs(n)>eps){
            n=a*1.0/i;
            sum=sum+n;
            i=i+3;
            a=-a;
        }
        printf("sum = %.6lf",sum);
    }
    return 0;
}