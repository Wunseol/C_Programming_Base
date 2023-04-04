#include <stdio.h>
int main()
{
    int a[11],n,b,c,flag=1;
    int j=0;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    j-=1;
    for(int i=0;i<=j;j--){
        if(flag==1){
            printf("%d",a[j]);
            flag=0;
        }else{
            printf(" %d",a[j]);
        }
    }
    return 0;
}