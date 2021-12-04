#include <stdio.h>
int main()
{
    int i,n,m,j,flag=0;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<m;i++){
        if(i==m-1){
            break;
        }
        for(j=1;j<n;j++){
            if(j==n-1){
                continue;
            }
            if(a[i][j]>a[i][j-1]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i+1][j]){
        printf("%d %d %d\n",a[i][j],i+1,j+1);
        flag=1;
    }
        }
    }
    if(flag==0){
        printf("None %d %d",m,n);
    }
    return 0;
}