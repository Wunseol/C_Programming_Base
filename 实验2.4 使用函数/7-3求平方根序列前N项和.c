#include <stdio.h>
#include <math.h>
int main()
{
    int i,n;
    double sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+pow(i,0.5);

    }
    printf("sum = %.2lf",sum);
    return 0;

}