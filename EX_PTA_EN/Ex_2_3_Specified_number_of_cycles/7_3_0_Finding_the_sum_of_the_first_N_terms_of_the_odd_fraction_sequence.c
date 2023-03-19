#include <stdio.h>
int main()
{
    int i,n;
    double sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+1.0/(2*i-1);
    }
    printf("sum = %lf",sum);
    return 0;
    
}