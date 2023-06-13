#include <stdio.h>

int gcd(int m,int n);

int main()
{
    int n,m;
    printf("Enter m n:");
    scanf("%d%d",&m,&n);
    printf("%d",gcd(m,n));
    return 0;
}

int gcd(int m,int n)
{
    int r,temp;
    if(m<n){
        temp=m;m=n;n=temp;
    }
    r=m%n;
    while(r!=0){
        m=n;
        n=r;
        r=m%n;

    }
    return n;

}