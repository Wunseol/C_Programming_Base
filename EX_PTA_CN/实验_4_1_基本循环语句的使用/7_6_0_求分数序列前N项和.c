#include <stdio.h>
int main()
{
    int n;
    double i=1.0,j=2.0,sum=0.0,a,b;
    int k=1;
    scanf("%d",&n);
    for(k=1;k<=n;k++){
        sum=sum+j/i;
        a=i;
        i=j;
        j=j+a;
    }
    printf("%.2lf",sum);
    return 0;
}