#include <stdio.h>
#include <math.h>

// ����funcosӦ�����ø�����ʽ��������������������Ҫ���cos(x)�Ľ���ֵ�������������˫���ȷ�Χ�ڡ�
double funcos( double e, double x );

int main()
{    
    double e, x;//�������e���Ա���x

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double funcos( double e, double x )
{
    double result=0,temp=1,fact=1;
    int power=0,sign=1;//power��,signת������
    while(temp>=e){
        temp=pow(x,power)/fact;
        result+=temp*sign;
        power+=2;
        fact*=(power)*(power-1);
        sign*=-1;
    }
    return result;

}
