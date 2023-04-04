#include <stdio.h>
#include <stdlib.h>
void print(int n,char a[10][10]);
int main()
{
    int n,k,count=0,fail=0;
    char a[10][10];
    scanf("%d",&n);
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=2*n;j++){
            scanf("%c",&a[i][j]);
            if(a[i][j]==' '||a[i][j]=='\n'){
                j--;
            }
        }
    }
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        int x1,x2,y1,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        if(a[x1][y1]==a[x2][y2]&&a[x1][y1]!='*'){
            a[x1][y1]=a[x2][y2]='*';
            count+=2;
            if(count!=2*n*2*n){
                print(n,a);
            }
        }else if(a[x1][y1]!=a[x2][y2]||a[x1][y1]=='*'&&a[x2][y2]=='*'){
            fail++;
            printf("Uh-oh\n");
        }
        if(count==2*n*2*n){
            printf("Congratulations!");
            exit(0);
        }
        if(fail==3){
            printf("Game Over");
            exit(0);
        }
    }
    return 0;
}
void print(int n,char a[10][10])
{
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=2*n;j++){
            if(j==1){
                printf("%c",a[i][j]);
            }else{
                printf(" %c",a[i][j]);
            }
        }
        printf("\n");
    }
}