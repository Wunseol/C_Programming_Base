#include <stdio.h>
int main()
{
    int n,t;
    int m=1;
    scanf("%d",&n);
    t=n;
    while(t/10!=0){
        m*=10;
        t/=10;
    }
    while(m!=0){
        printf("%d ",n/m);
        n%=m;
        m/=10;
    }
    return 0;
}