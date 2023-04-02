// 本题要求两个给定正整数的最大公约数和最小公倍数
#include <stdio.h>
int main()
{
    int n,m,a,b;
    int x;
    int y;
    scanf("%d %d",&n,&m);
    a=n;
    b=m;
    while(m!=0){
        x=n%m;
        n=m;
        m=x;
    }
    y=(a*b)/n;
    printf("%d %d\n",n,y);
    return 0;
}


