#include <stdio.h>
int main()
{
    int n;
    int a[1010];
    int max=0;
    int t;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
        if(c>max){
            max=c;
            t=a[i];
        }
    }
    printf("%d %d",t,max);
    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int number[1000];
//     int  i,j,n;
//     int temp;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&number[i]);
//     }
//     for(i=2;i<=n;j++){
//         for(j=0;j<=n-i;j++){
//             if(number[j]>number[j+1]){
//                 temp=number[j];
//                 number[j]=number[j+1];
//                 number[j+1]=temp;
//             }
//         }
//     }
//     int count=0;
//     int count1=0;
//     int flag=0;
//     if(n>1){
//         for(i=0;i<=n-2;i++){
//             count1=1;
//             while(number[i+1]==number[i]){
//                 i++;
//                 count1++;
//             }
//             if(count1>count){
//                 flag=number[i-1];
//                 count=count1;
//             }
//         }
//         printf("%d %d\n",flag,count);
//     }
//     else if(n==1){
//         printf("%d %d\n",number[0],1);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n,i,j,big;
//     scanf("%d",&n);
//     int a[n];
//     int c[19];
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<19;i++){
//         c[i]=0;
//     }
//     for(i=0;i<n;i++){
//         switch (a[i])
//         {
//         case -9:c[0]++;break;
//         case -8:c[1]++;break;
//         case -7:c[2]++;break;
//         case -6:c[3]++;break;
//         case -5:c[4]++;break;
//         case -4:c[5]++;break;
//         case -3:c[6]++;break;
//         case -2:c[7]++;break;
//         case -1:c[8]++;break;
//         case 0: c[9]++;break;
//         case 1:c[10]++;break;
//         case 2:c[11]++;break;
//         case 3:c[12]++;break;
//         case 4:c[13]++;break;
//         case 5:c[14]++;break;
//         case 6:c[15]++;break;
//         case 7:c[16]++;break;
//         case 8:c[17]++;break;
//         case 9:c[18]++;break;
//         default:
//             break;
//         }
//     }
//     big=c[0];
//     for(i=0;i<19;i++){
//         if(c[i]>big){
//             big=c[i];
//             j=i;
//         }
//     }
//     printf("%d %d",j-9,big);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n,i,j,t,cnt;
//     int a[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int max[n];
//     for(i=0;i<n;i++){
//         cnt=0;
//         for(j=0;j<n;j++){
//             if(a[i]==a[j]){
//                 cnt++;
//             }
//         }
//         max[i]=cnt;
//     }
//     t=0;
//     for(i=1;i<n;i++){
//         if(max[t]<max[i]){
//             t=i;
//         }
//     }
//     printf("%d %d",a[t],max[t]);
//     return 0;
// }