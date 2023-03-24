#include <stdio.h>
int main()
{
    int i,n;
    int num[10];
    int flag=1;
    scanf("%d",&n);
    for(int i;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++){
        num[i]=num[i+1]-num[i];
    }
    if(n==2){
        flag=0;
        printf("%d\n",num[i]);
    }else if(n==3){
        flag=0;
        printf("%d %d\n",num[i],num[i+1]);
    }else if(n>3){
        for(int i=0;i<n-1;i++){
            if((i+1)%3==0&&i!=0){
                printf("%d\n",num[i]);
            }else{
                if(i==n-2){
                    printf("%d",num[i]);
                }else{
                    printf("%d ",num[i]);
                }
            }
        }
    }
    return 0;

}