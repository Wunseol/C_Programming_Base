#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));        
    printf("s = %d\n", SumA(a,n));    

    return 0;
}

int fn( int a, int n )
{
    int i,x;
    x=a;
    for(i=1;i<n;i++){
        a=a*10+x;
    }
    return a;

}

int SumA( int a, int n )
{
    int i,x;
    int sum=0;
    x=a;
    for(i=1;i<=n;i++){
        sum+=a;
        a=a*10+x;

    }
    return sum;    
}