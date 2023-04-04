#include <stdio.h>
int main()
{
    int n,i,flag=1;
    scanf("%d",&n);
    int number[n];
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    for(i=0;i<n;i++){
        number[i]=number[i+1]-number[i];
    }
    i=0;
    if(n==2){
        flag=0;
        printf("%d\n",number[i]);
    }else if(n==3){
        flag=0;
        printf("%d %d\n",number[i],number[i+1]);
    }else if(n>3){
        for(i=0;i<n-1;i++){
        if((i+1)%3==0&&i!=0){
            printf("%d\n",number[i]);
        }else{
            if(i==n-2){
                printf("%d",number[i]);
            }else{
                printf("%d ",number[i]);
            }
        }
    }
    }    
    return 0;
}