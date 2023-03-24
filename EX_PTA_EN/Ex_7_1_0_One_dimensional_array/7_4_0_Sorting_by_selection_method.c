#include <stdio.h>
int main()
{
    int a[10],n;
    int bigger=-1000;
    int subscript;
    int flag=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(bigger<a[j]){
                bigger=a[j];
                subscript=j;
            }
        }
        if(flag==1){
            printf("%d",bigger);
            a[subscript]=-1000;
            flag=0;
            bigger=-1000;
        }else{
            printf(" %d",bigger);
            a[subscript]=-1000;
            bigger=-1000;
        }
    }
    return 0;
}