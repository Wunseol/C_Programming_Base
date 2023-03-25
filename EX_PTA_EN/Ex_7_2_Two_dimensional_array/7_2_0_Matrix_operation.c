#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    int a[10][10];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(i!=n-1&&j!=n-1&&j!=n-1-i){
                sum+=a[i][j];
            }
        }
    }
    printf("%d",sum);
    return 0;
}