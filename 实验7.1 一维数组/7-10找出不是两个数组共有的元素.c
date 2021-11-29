#include <stdio.h>
int main()
{
    int a[20],b[20],c[40],i,j,k,n,m,num=0,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]==b[j])
            break;
        }
        if(j==m){
            c[num++]=a[i];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(b[i]==a[j]){
                break;
            }
        }
        if(j==n){
            c[num++]=b[i];
        }
    }
    f=0;
    for(i=0;i<num;i++){
        for(j=0;j<i;j++){
            if(c[i]==c[j]){
                break;
            }
        }
        if(j==i){
            if(f!=0){
                printf(" ");
            }
            printf("%d",c[i]);
            f++;
        }
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n1,n2,i,j,k,count=0,flag=0;
//     int a[20];
//     int b[20];
//     int c[40];
//     scanf("%d",&n1);
//     for(i=0;i<n1;i++){
//         scanf("%d",&a[i]);
//     }
//     scanf("%d",&n2);
//     for(i=0;i<n2;i++){
//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             if(a[i]==b[j]){
//                 c[count]=b[j];
//                 count++;
//                 continue;
//             }
//         }
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int n1,n2,i,j,k,count=0,flag=0;
//     int a[20];
//     int b[20];
//     int c[20];
//     scanf("%d",&n1);
//     for(i=0;i<n1;i++){
//         scanf("%d",&a[i]);
//     }
//     scanf("%d",&n2);
//     for(i=0;i<n2;i++){
//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             if(a[i]==b[j]){
//                 c[i]=b[j];
//                 count++;
//                 continue;
//             }
//         }
//     }
//     for(i=0;i<n1;i++){
//         if(a[i]!=c[i]){
//             if(flag==0){
//                 printf("%d",a[i]);
//                 flag=1;
//                 continue;
//             }
//             if(flag==1){
//                 printf(" %d",a[i]);
//             }
//         }
//     }
//     for(i=0;i<n2;i++){
//         if(b[i]!=c[i]){
//             if(flag==0){
//                 printf("%d",b[i]);
//                 flag=1;
//                 continue;
//             }
//             if(flag==1){
//                 printf(" %d",b[i]);
//             }
//         }
//     }
//     return 0;
// }