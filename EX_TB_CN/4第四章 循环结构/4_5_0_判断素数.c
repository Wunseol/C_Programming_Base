#include <stdio.h>
#include <math.h>
int main()
{
    int i,limit,m;
    printf("Enter a number:");
    scanf("%d",&m);
    if(m<=1){
        printf("No");
    }else if(m==2){
        printf("%d isa prime number!\n");
    }else{
        limit=sqrt(m)+1;
        for(i=2;i<=limit;i++){
            if(m%i==0){
                break;
            }
        }
        if(i>limit){
            printf("%d is a prime number!\n",m);
        }else{
            printf("No!");
        }
    }
    return 0;
}