#include <stdio.h>
int main()
{
    int n;
    double i=1,j=2,k,sum=0,a,b;
    scanf("%d",&n);
    for(k=0;k<n;k++){
        sum=sum+j/i;
        a=i;
        i=j;
        j=j+a;
    }
    printf("%.2lf",sum);
    return 0;

}