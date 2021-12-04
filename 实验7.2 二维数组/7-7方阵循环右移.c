#include <stdio.h>
int main()
{
    int i,j,n,k,m;
    scanf("%d %d",&m,&n);
    int a[n][n],b[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    while(m>n){
        m-=n;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            b[i][j]=a[i][(j+n-m)%n];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}