#include <stdio.h>
int main()
{
    int n=0;
    double sum=0;
    scanf("%d",&n);
    while(n>0){
        sum+=1.0/n;
        n=n-1;
    }
    printf("sum = %lf",sum);
    return 0;

}