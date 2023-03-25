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
