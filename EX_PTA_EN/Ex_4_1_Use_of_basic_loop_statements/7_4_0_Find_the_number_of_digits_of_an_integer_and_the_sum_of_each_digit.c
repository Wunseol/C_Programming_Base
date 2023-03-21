#include <stdio.h>
int main()
{
    int a,b,i,sum=0;
    scanf("%d",&a);
    i=0;
    while(a>0){
        b=a%10;
        sum=sum+b;
        a=a/10;
        i++;
    }
    printf("%d %d",i,sum);
    return 0;
    
}