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