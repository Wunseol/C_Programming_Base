#include <stdio.h>
#include <math.h>
int main()
{
    int a,n,i,sum=0;
    scanf("%d",&n);
    if(n<=10&&n>=0){
        for(i=1;i<=n;i++){
            a=pow(2,i);
            sum=sum+a;


        }
    }
    printf("result = %d",sum);
    return 0;

}