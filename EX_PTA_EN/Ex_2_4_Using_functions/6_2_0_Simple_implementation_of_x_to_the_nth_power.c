// 本题要求实现一个计算 x^n（n≥0）的函数。
// 输入样例：
// 0.24 4
// 输出样例：
// 0.003318
//

#include <stdio.h>

double mypow(double x,int n);

int main()
{
    double x;
    int n;
    scanf("%lf %d",&x,&n);
    printf("%lf\n",mypow(x,n));
    return 0;

}

double mypow(double x,int n)
{
    double y=1,i;
    for(i=0;i<n;i++){
        y=y*x;
    }
    return y;

}