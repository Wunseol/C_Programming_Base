// 本题要求对两个正整数m和n（m≤n）编写程序，计算序列和 m^2 + 1/m + (m+1)^2 + 1/(m+1) + ⋯ + n^2 + 1/n。
// 输入样例:
// 5 10
// 输出样例:
// sum = 355.845635

#include <stdio.h>
#include <math.h>
int main()
{
    double n,m;
    double sum=0;
    scanf("%lf %lf",&m,&n);
    for(;m<=n;m++){
        sum=sum+pow(m,2)+1/m;
    }
    printf("sum = %.6lf",sum);
    return 0;

}