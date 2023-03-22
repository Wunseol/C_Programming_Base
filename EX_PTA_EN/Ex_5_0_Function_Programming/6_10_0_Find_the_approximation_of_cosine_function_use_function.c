#include <stdio.h>
#include <math.h>

// 函数funcos应返回用给定公式计算出来、并且满足误差要求的cos(x)的近似值。输入输出均在双精度范围内。
double funcos( double e, double x );

int main()
{    
    double e, x;//误差上限e和自变量x

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double funcos( double e, double x )
{
    double result=0,temp=1,fact=1;
    int power=0,sign=1;//power幂,sign转换正负
    while(temp>=e){
        temp=pow(x,power)/fact;
        result+=temp*sign;
        power+=2;
        fact*=(power)*(power-1);
        sign*=-1;
    }
    return result;

}
