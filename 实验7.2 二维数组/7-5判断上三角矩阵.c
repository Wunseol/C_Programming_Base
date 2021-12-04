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

// #include <stdio.h>
// int main()
// {
//     int i,j,k,flag,c,n;
//     scanf("%d",&c);
//     for(k=0;k<c;k++){
//         flag=0;
//         scanf("%d",&n);
//         int a[n][n];
//         for(i=0;i<n;i++){
//             for(j=0;j<n;j++){
//                 scanf("%d",&a[i][j]);
//             }
//         }
//         for(i=0;i<n;i++){
//             for(j=0;j<n;j++){
//                 if(i>j&&a[i][j]!=0){
//                     flag=1;
//                 }
//             }
//         }
//         if(flag==0){
//             printf("YES\n");
//         }else{
//             printf("No\n");
//         }
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a[10][10];
//     int n,m,k,i,j,flag;
//     scanf("%d",&n);
//     for(k=1;k<=n;k++){
//         scanf("%d",&m);
//         flag=0;
//         for(i=0;i<n;i++){
//             for(j=0;j<n;j++){
//                 scanf("%d",&a[i][j]);
//                 if(i>j&&a[i][j]!=0){
//                     flag=1;
//                 }
//             }
//         }
//         if(flag==0){
//             printf("YES\n");
//         }else{
//             printf("NO\n");
//         }
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int k,i,j,n,flag=0,c;
//     int a[10][10];
//     scanf("%d",&c);
//     scanf("%d",&n);

//     for(k=0;k<c;k++){
//         for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             scanf("%d",&a[i][j]);
//         }
//         while(i!=n-1&&j!=n-2){
//         for(i=0;i<n;i++){
//             for(j=0;j<n;j++){
//                 if(i>j&&a[i][j]==0){
//                     flag=1;
//                 }
//             }
//         }
//     }
//     if(flag==1){
//         printf("YES\n");
//     }else{
//         printf("No\n");
//     }
//     }
//     }
//     return 0;
// }