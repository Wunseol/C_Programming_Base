//����Ҫ�������������m��n��m��n����д���򣬼������к�pow(m,2)+1/m+(m+1)2+1/(m+1)+�6�8+n 2+1/n��
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