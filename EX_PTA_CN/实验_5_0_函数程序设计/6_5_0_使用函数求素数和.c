#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
// int prime( int p )
// {
//     int i,isprime=1;
//     if(p>=2){
//     for(i=2;i<p;i++){
//         if (p%i==0){
//             isprime=0;
//             break;
//         }
//     }
//     return isprime;
//     }
// }
int PrimeSum( int m, int n )
{

    int i,s=0;
    i=m;
    if(m<0)m=2;
    for(i=m;i<=n;i++){
        if(prime(i)){
            s+=i;
        }
    }
    return s;

}
int prime( int p )
{
    int i,f=0;
    for(i=2;i<p;i++){
        if(p%i==0){
            break;
        }
    }
    if(i==p){
        f=1;
    }
    return f;
}
// int PrimeSum( int m, int n )
// {
//     int i,s=0;
//     for(i=m;i<=n;i++){
//         if(prime(i)){
//             s+=i;
//         }
//     }
//     return s;
// }
