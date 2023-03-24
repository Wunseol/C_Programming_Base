#include <stdio.h>
int main()
{
    int a[10]={0},n;
    int flag=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    n--;
    for(int i=0;i<=n;){
        if(flag==1){
            printf("%d",a[n]);
            flag=0;
        }else{
            printf(" %d",a[n]);
        }
        n--;
    }
    return 0;

}