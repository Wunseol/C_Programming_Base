#include <stdio.h>
int main()
{
    int i,j,n,m,sum=0;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
            
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}