#include <stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter n:");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;

    }
    printf("sum of numbers from 1 to %d is %d\n",n,sum);
    return 0;
    
}