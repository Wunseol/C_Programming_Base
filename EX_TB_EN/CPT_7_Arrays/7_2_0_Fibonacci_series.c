#include <stdio.h>
#define MAXN 46
int main()
{
    int i,n;
    int fib[MAXN]={1,1};
    printf("Enter n:");
    scanf("%d",&n);
    if(n>=1&&n<=46){
        for(i=2;i<10;i++){
            fib[i]=fib[i-1]+fib[i-2];
        }
        for(i=0;i<10;i++){
            printf("%6d",fib[i]);
            if((i+1)%5==0){
                printf("\n");
            }
        }
        if(n%5!=0){
            printf("\n");
        }
    }else{
        printf("Invalue Value.\n");
    }
    return 0;
}