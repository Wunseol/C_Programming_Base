#include <stdio.h>
#include <math.h>
int prime(int m);
int main()
{
    int n,m;
    scanf("%d",&n);
    if(prime){
        printf("是素数\n");
    }else{
        printf("不是素数\n");
    }
    return 0;
}
int prime(int m)
{
    int i,limit;
    if(m<=1){
        return 0;
    }else if(m==2){
        return 1;
    }else{
        limit=sqrt(m)+1;
        for(i=2;i<=limit;i++){
            if(m%i==0){
                return 0;
            }
        }
        return 1;
    }
}