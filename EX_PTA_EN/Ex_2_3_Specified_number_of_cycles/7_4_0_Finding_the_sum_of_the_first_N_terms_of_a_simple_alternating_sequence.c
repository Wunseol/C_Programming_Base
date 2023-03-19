#include <stdio.h>
int main()
{
    int n,i;
    double sum=1;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(i%2==0){
            sum=sum+1.0/(3*i+1);
        }else{
            sum=sum-1.0/(3*i+1);
        }
    }
    printf("sum = %.3lf",sum);
    return 0;

}