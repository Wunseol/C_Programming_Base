#include <stdio.h>

double mypow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
double mypow( double x, int n )
{
    double y=1,i;
    for(i=0;i<n;i++)
    {
        y=y*x;
    }
    
    return y;

}