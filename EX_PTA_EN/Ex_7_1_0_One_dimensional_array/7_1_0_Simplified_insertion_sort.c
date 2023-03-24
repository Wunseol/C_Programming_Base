#include <stdio.h>
int main()
{
    int n,i,bigger;
    int e,flag;
    int a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&e);
    for(i=0;i<n;i++){
        bigger=a[i];
        if((e<bigger)&&(flag==0)){
            printf("%d ",e);
            flag=1;
        }
        printf("%d ",a[i]);
    }
    if(bigger<e){
        printf("%d ",e);
    }
    return 0;

}