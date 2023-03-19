#include <stdio.h>

double fact(int n);

int main()
{
    int n,m;
    double sum;
    scanf("%d %d",&m,&n);

    sum=fact(n)/(fact(m)*fact(n-m));\
    printf("result = %.0lf",sum);
    return 0;

}

double fact(int n)
{
    double j,sum=1;
    for(int i=1;i<=n;i++){
        j=sum;
        sum=i*j;
    }
    return sum;

}
