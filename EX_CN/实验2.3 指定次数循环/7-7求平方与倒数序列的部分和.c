//本题要求对两个正整数m和n（m≤n）编写程序，计算序列和pow(m,2)+1/m+(m+1)2+1/(m+1)+⋯+n 2+1/n。
#include <stdio.h>
#include <math.h>
int main()
{
    double i,n,m;
    double s=0;
    scanf("%lf %lf",&m,&n);

    for (i=1;m<=n;m++){
        
        s=s+pow(m,2)+1/m;

    }
    printf("sum = %.6lf",s);
    return 0;

}