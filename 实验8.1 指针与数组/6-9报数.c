#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
void CountOff( int n, int m, int out[] )
{
    int i,j=1,num=0,flag=n;
    int a[MAXN];
    for(i=0;i<n;i++){
        a[i]=i+1;
    }while(flag!=0){
        for(i=0;i<n;i++){
            if(a[i]!=0){
                num++;
                if(num==m){
                    a[i]=0;
                    out[i]=j;
                    j++;
                    flag--;
                    num=0;
                }
            }
        }
    }
}
// void CountOff( int n, int m, int out[] )
// {
//     int i,j=1,num=0,flag=n;
//     int a[20];
//     for(i=0;i<n;i++){
//         a[i]=i+1;
//     }while(flag!=0){
//         for(i=0;i<n;i++){
//             if(a[i]!=0){
//                 num++;
//                 if(num==m){
//                     a[i]=0;
//                     out[i]=j;
//                     j++;
//                     flag--;
//                     num=0;
//                 }
//             }
//         }
//     }
// }