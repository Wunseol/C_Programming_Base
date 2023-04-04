#include <stdio.h>
int main()
{
    int i,j,n,a[1000],b[1000],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=100;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[j]-a[i]>=0){
                b[j]-=a[i];
                printf("%d %d\n",a[i],j+1);
                if(count<j+1){
                    count=j+1;
                }
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}


// #include <stdio.h>
// int main()
// {
//     int n,i,j;
//     int count=1;
//     int a[1000],s[1000]={0};
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=1;i<n;i++){
//         for(j=1;j<=count;j++){
//             if(a[i]+s[j]<=100){
//                 s[j]=s[j]+a[i];
//                 printf("%d %d\n",a[i],j);
//                 break;
//             }
//         }
//         if(j==count+1){
//             s[++count]=a[i];
//             printf("%d %d\n",a[i],count);
//         }
//     }
//     printf("%d\n",count);
//     return 0;
// }


















// #include <stdio.h>
// int main()
// {
//     int a[1001],b[1001],c[1001],i,j,w=0,cnt=0,n;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]),c[i]=a[i];
//     }
//     for(i=0;i<n;i++){
//         if(a[i]<=100){
//             cnt++;w=a[i],b[i]=cnt;
//         }
//         for(j=i+1;j<n;j++){
//             if(w+a[j]<=100){
//                 w+a[j],a[j]=cnt,a[j]=101;
//             }
//         }
//     }
//     for(i=0;i<n;i++){
//         printf("%d %d\n",c[i],b[i]);
//     }
//     printf("%d",cnt);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int a[1001],b[1001],i,j,k=1,x,n,flag=1,c[1001],max=0,index;
//     for(i=1;i<=n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=1;i<=n;i++){
//         k=1;flag=1;
//         while(flag){
//             if((b[k]+a[i])<=100){
//                 flag=0;
//                 b[k]=b[k]+a[i];
//                 c[i]=k;  
//             }
//         }
//         k++;
//     }
//     index=1;
//     for(i=1;i<=n;i++){
//         if(c[i]>c[index]){
//             index=i;
//         }
//     }
//     for(i=1;i<=n;i++){
//         printf("%d %d\n",a[i],c[i]);
//     }
//     printf("%d",c[index]);
//     return 0;
// }