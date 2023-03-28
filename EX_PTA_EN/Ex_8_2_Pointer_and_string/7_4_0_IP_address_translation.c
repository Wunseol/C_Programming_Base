#include <stdio.h>
#include <math.h>
#define N 8
#define M 4
int main()
{
    int n[M]={0},i,j,count=0;
    char ch[M][N];
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            ch[i][j]=getchar();
        }
    }
    for(i=0;i<M;i++){
        count=7;
        for(j=0;j<N;j++){
            n[i]=n[i]+(ch[i][j]-'0')*pow(2,count);
            count--;
        }
    }
    for(i=0;i<M;i++){
        printf("%d",n[i]);
        if(i<3){
            printf(".");
        }
    }
    return 0;
}