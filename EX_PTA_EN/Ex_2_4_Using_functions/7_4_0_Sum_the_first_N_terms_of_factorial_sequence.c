#include <stdio.h>

int main()
{
    int a=1,n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=i*a;
        sum=sum+a;
    }
    printf("%d",sum);
    return 0;

}