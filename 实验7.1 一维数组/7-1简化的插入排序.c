#include <stdio.h>
int main()
{
    int n,i,bigger,c,k,flag=0;
    scanf("%d",&n);
    int a[11];
    for(k=0;k<n;k++){
        scanf("%d",&a[k]);
    }
    scanf("%d",&c);
    for(i=0;i<n;i++){
        bigger=a[i];
        if((c<bigger)&&(flag==0)){
            printf("%d ",c);
            flag=1;
        }
        printf("%d ",a[i]);
    }
    if(bigger<c){
        printf("%d ",c);
    }
    return 0;
}