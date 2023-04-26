#include <stdio.h>

int gcd(int m, int n);

int main()
{
    int n;
    int m;
    scanf("%d %d", &m, &n);
    printf("%d",gcd(m,n));
    return 0;

}

int gcd(int m, int n)
{
    if(m%n == 0){
        return n;
    }else{
        return gcd(n,m%n);
    }
}
