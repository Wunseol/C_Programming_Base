#include <stdio.h>
#define MAXN 10

void ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void ArrayShift( int a[], int n, int m )
{
    int i,b[n],t;
    t=n;
    if(m>n){
        n=n*10;
    }
    for(i=0;i<t;i++){
        b[i]=a[(i+n-m)%t];
    }
    for(i=0;i<t;i++){
        a[i]=b[i];
    }
}