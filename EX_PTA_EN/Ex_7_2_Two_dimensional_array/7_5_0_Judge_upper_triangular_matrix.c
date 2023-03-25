#include <stdio.h>
int main()
{
    int a[10][10];
    int n,m,k,i,j,flag;
    scanf("%d",&n);
    for(k=1;k<=n;k++){
        scanf("%d",&m);
        for(i=0;i<m;i++){
            flag=0;
            for(j=0;j<m;j++){
                scanf("%d",&a[i][j]);
                if(i>j&&a[i][j]!=0){
                    flag=1;
                }
            }
        }
        if(flag==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
