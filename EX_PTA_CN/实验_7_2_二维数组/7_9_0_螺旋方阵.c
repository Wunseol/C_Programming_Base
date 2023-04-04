#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int k=1;
    for(int i=0;i<=n/2;i++){
        int x=i,y=i;
        for( ;y<n-i-1;++y,++k){
            a[x][y]=k;
        }
        for( ;x<n-i-1;++x,++k){
            a[x][y]=k;
        }
        for( ;y>i;++k,--y){
            a[x][y]=k;
        }
        for( ;x>i;++k,--x){
            a[x][y]=k;
        }
    }
    if(n%2==1)a[n/2][n/2]=n*n;
    for(int x=0;x<n;++x){
        for(int y=0;y<n;++y){
            printf("%3d",a[x][y]);
        }
        printf("\n");
    }
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int n,i,j,k,s=1,a[1000][1000];
//     scanf("%d",&n);
//     for(i=0;i<n/2;i++){
//         for(j=i;j<n-i;j++)
//         a[i][j]=s++;
//         for(j=i+1;j<n-i;j++)
//         a[j][n-i-1]=s++;
//         for(j=n-2-i;j<i;j--)
//         a[n-i-1][j]=s++;
//         for(j=n-i-1;j>i;j--)
//         a[j][i]=s++;
//     }
//     if(n%2==1)
//     a[i][i]=s++;
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++)
//         printf("%3d",a[i][j]);
//         printf("\n");
//     }
//     return 0;
// }