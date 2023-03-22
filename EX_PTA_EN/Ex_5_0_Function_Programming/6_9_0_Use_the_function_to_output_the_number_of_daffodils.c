#include <stdio.h>
#include <math.h>

//判断number是否为水仙花数，是则返回1，否则返回0
int narcissistic( int number );
//函数PrintN则打印开区间(m, n)内所有的水仙花数，每个数字占一行。题目保证100≤m≤n≤10000
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

int narcissistic( int number )
{
    
    int count=0;//获得位数
    int n=0;//暂存number

    n=number;
    while (n)
    {
        count++;
        n/=10;
    }
    int i,j,t,sum=0;
    n=number;
    for(i=0;i<count;i++){
        t=n%10;
        t=(int)pow(t,count);
        sum+=t;
        n/=10;
    }
    if(sum==number){
        return 1;
    }else{
        return 0;
    }
    
}

void PrintN( int m, int n )
{
    int i;
    for(i=m+1;i<n;i++){
        if(narcissistic(i)){
            printf("%d\n",i);
        }
    }
}
