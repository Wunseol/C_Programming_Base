#include <stdio.h>
int main()
{
    int a[11],i,k,j,b,n,bigger=-1000,flag=1;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            if(bigger<a[k]){
            bigger=a[k];
            b=k;
            }
        }
        if(flag==1){
            printf("%d",bigger);
            a[b]=-1000;
            flag=0;
            bigger=-1000;
        }else{
            printf(" %d",bigger);
            a[b]=-1000;
            bigger=-1000;
        }
    }
    return 0;
}