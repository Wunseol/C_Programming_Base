#include <stdio.h>
int main()
{
    int n,subscript=0;
    int bigger=-1,flag=1;
    int a[10]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bigger=a[0];
    for(int i=1;i<=n;i++){
        if(a[i]>=bigger){
            if(bigger==a[i]){
                flag=0;
            }
            bigger=a[i];
            if(flag==1){
                subscript=i;
            }
            flag=1;
        }
    }
    printf("%d %d",bigger,subscript);
    return 0;
}