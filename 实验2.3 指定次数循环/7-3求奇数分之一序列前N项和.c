#include <stdio.h>
int main()
{
    int i,n;
    double s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+1.0/(2*i-1);    
        }
    printf("sum = %lf",s);
    return 0;

}