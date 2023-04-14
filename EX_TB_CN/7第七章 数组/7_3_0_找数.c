#include <stdio.h>
#define MAXN 10
int main()
{
    int i,n,flag,x;
    int a[MAXN];
    printf("Enter n,x:");
    scanf("%d%d",&n,&x);
    printf("Enter %d integers:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    flag=0;
    for(i=0;i<n;i++){
        if(a[i]==x){
            printf("Index if %d\n",i);
            flag=1;
        }
    }
    if(flag==0){
        printf("Not Found\n");
    }
    return 0;
}