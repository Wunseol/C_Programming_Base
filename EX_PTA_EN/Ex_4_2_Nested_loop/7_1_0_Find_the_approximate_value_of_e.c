#include <stdio.h>
int main()
{
    double a,n,i=1,sum=1;
    scanf("%lf",&n);
    a=i;
    while(i<=n){
        sum=sum+1/(a*i);
        a=a*i;
        i++;
    }
    printf("%.8lf",sum);
    return 0;
    
}