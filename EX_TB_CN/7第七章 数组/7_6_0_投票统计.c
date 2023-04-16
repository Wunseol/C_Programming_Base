#include <stdio.h>
#define MAXN 8
int main()
{
    int i,response,n;
    int count[MAXN+1];

    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=MAXN;i++){
        count[i]=0;
    }
    for(i=1;i<=n;i++){
        printf("Enter your response:");
        scanf("%d",&response);
        if(response>=1&&response<=MAXN){
            count[response]++;
        }else{
            printf("invalid:%d\n",response);
        }
    }
    printf("result:\n");
    for(i=1;i<=MAXN;i++){
        if(count[i]!=0){
            printf("%4d%4d\n",i,count[i]);
        }
    }
    return 0;
}