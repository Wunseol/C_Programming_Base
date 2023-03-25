#include <stdio.h>
int main()
{
    int n;
    int m;
    int sum=0;
    scanf("%d %d",&n,&m);
    int a[10][10];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;

}