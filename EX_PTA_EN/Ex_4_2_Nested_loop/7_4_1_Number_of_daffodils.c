#include <stdio.h>
#include <math.h>

int main()
{
    int n,m;
    scanf("%d",&n);
    int x=0;
    for(x=pow(10,n-1);x<(pow(10,n));x++){
        int b=x;
        int sum=0,a=0,i;
        for(i=1;i<=n;i++){
            a=b%10;
            b/=10;
            sum+=pow(a,n);
        }
        if(sum==x){
            printf("%d\n",x);
        }
    }
    return 0;

}
