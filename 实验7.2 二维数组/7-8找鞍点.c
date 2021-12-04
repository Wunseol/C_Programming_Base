#include <stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int index=0,judge=1;
    k=0;
    l=0;
    if(n==1){
        printf("0 0");
    }else{
        for(i=0;i<n;i++){
            index=i;
            for(l=0;l<n;l++){
                if(a[i][k]<=a[i][l]){
                    k=l;
                }
            }
            for(j=0;j<n;j++){
                if(a[index][k]>a[j][k]){
                    index=j;
                    break;
                }
            }
            if(i==index){
                judge=0;
                break;
            }
        }
        if(judge==0){
            printf("%d %d",i,k);
        }else{
            printf("NONE");
        }
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int i,j,n,hang1,lie1,flag=1,k;
//     scanf("%d",&n);
//     int a[n][n];
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<n;i++){
//         int max=a[i][0];
//         hang1=i;
//         lie1=0;
//         for(j=1;j<n;j++){
//             if(max<=a[i][j]){
//                 max=a[i][j];
//                 lie1=j;
//             }
//             for(k=0;k<n;k++){
//                 if(max>a[k][lie1]){
//                     flag=0;
//                 }
//                 if(flag==1){
//                     break;
//                 }
//             }
//         }
//     }
//     if(flag==1){
//         printf("%d %d",hang1,lie1);
//     }else{
//         printf("NONE");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int i,j,n;
//     scanf("%d",&n);
//     int a[n][n];
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if()
//         }
//     }
// }