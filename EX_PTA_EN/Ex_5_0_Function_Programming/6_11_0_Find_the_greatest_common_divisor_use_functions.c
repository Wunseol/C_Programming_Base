#include <stdio.h>

// ����x��y������������������gcdӦ�����������������Լ����GCD���Լ��(Greatest Common Divisor)
int gcd( int x, int y );

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}

int gcd( int x, int y )
{
    int n,i;
    if(x>y){
        n=y;
    }else{
        n=x;
    }
    for(i=n;i>0;i--){
        if(x%i==0&&y%i==0){
            break;
        }
    }
    return i;

}