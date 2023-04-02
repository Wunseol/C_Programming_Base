#include <stdio.h>
int pow1(int m,int n){
    int j,s=1;
    for(j=1;j<=n;j++){
        s*=m;

    }
    return s;
}

int main()
{
    int n,m;
    scanf("%d",&n);
    int x=0;
    for(x=pow1(10,n-1);x<(pow1(10,n));x++)
    {
        int b=x;
        int sum=0,a=0,i;
        for(i=1;i<=n;i++)
        {
            a=b%10;
            b/=10;
            sum+=pow1(a,n);
        }
        if(sum==x)
        {
            printf("%d\n",x);
        }
    }
    return 0;
}