#include <stdio.h>
int main()
{
    int m,n,i,j,k,sum,index,flag=0;
    int num[10000];
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++){
        index=0;
        sum=0;
        for(j=1;j<=(i/2);j++){
            if(i%j==0){
                num[index++]=j;
                sum+=j;
            }
        }
        if(sum==i){
            flag=1;
            printf("%d =",i);
            for(k=0;k<index-1;k++){
                printf(" %d +",num[k]);
            }
            printf(" %d\n",num[k]);
        }
    }
    if(flag==0){
        printf("None\n");
    }
    return 0;
    
}