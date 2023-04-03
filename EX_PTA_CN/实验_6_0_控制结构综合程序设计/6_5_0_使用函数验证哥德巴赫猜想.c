#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int prime( int p )
{
    int i,flag=1;
    if(p==1){
        return 0;
    }
    for(i=2;i<p;i++){
        if(p%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}
void Goldbach( int n )
{
    int i,count=0;
    for(i=2;i<=n;i++){
        if(prime(i)==1&&prime(n-i)==1){
            count++;
            if(count==1){
                printf("%d=%d+%d",n,i,n-i);
            }
        }
    }
}