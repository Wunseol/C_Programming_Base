#include <stdio.h>
int main()
{
    int i,j,n,bigger=-1,b=0,flag=1;
    int a[11]={0};
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    bigger=a[0];
    for(i=1;i<=n;i++){
        if(a[i]>=bigger){
            if(bigger==a[i]){
                flag=0;
            }
            bigger=a[i];
            if(flag==1){
                b=i;
            }
            flag=1;
        }  
    }
    printf("%d %d",bigger,b);
    return 0;
}