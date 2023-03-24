#include <stdio.h>
int main()
{
    int i,n,a,flag=1,out;
    int num[20];
    scanf("%d",&n);
    scanf("%d",&a);
    for(int i;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++){
        if(a==num[i]){
            out=i;
            flag=0;
        }
    }
    if(flag==0){
        printf("%d",out);
    }else{
        printf("Not Found");
    }
    return 0;

}