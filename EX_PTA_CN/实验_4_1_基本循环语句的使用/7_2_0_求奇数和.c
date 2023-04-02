// 本题要求计算给定的一系列正整数中奇数的和。
#include <stdio.h>
int main()
{
    int n,j,sum=0;
    scanf("%d",&n);
    while(n>0){
        j=n%2;
        if(j==0)
        {
            scanf("%d",&n);
            
        }else {
        sum=sum+n;
        scanf("%d",&n);
        }
    }
    printf("%d",sum);
    return 0;
    
}