#include <stdio.h>
#include <math.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic( int number )
{
    int count=0,n=0;
    n=number;
    while(n)
    {
        count++;
        n/=10;
    }
    int i,j,t,sum=0;
    n=number;
    for(i=0;i<count;i++)
    {
        t=n%10;
        t=(int)pow(t,count);
        sum+=t;
        n/=10;
    }
    if(sum==number)
    return 1;
    else
    return 0;
}
void PrintN( int m, int n )
{
    int i;
    for(i=m+1;i<n;i++)
    {
        if(narcissistic(i))
        printf("%d\n",i);
    }
}
