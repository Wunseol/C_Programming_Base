#include <stdio.h>
#include <math.h>

int IsSquare( int n );

int main()
{
    int n;

    scanf("%d", &n);
    if ( IsSquare(n) ) printf("YES\n");
    else printf("NO\n");

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

int IsSquare( int n )
{
    int i,f=0;
    if(n!=0){
        for(i=1;i<=n;i++){
            if(n==i*i){
                f=1;
                break;
            }
        }
    }
    else{f=1;}
    return f;
}
