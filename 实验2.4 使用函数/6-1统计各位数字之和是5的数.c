#include <stdio.h>

int is( int number );
void count_sum( int a, int b );

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    if (is(a)) printf("%d is counted.\n", a);
    if (is(b)) printf("%d is counted.\n", b);
    count_sum(a, b);

    return 0;
}

/* 你的代码将被嵌在这里 */
int is(int number)
{
    int n,s=0;
    while(number!=0){
        n=number%10;
        s=s+n;
        number/=10;
    }
    if(s==5){
        return 1;
    }
    else {
        return 0;
    }
}
void count_sum( int a, int b )
{
    int i,count=0,sum=0;
    for(i=a;i<=b;i++)
    {
        if(is(i)){
            count++;
            sum=sum+i;
        }
    }
    printf("count = %d, sum = %d",count,sum);
}