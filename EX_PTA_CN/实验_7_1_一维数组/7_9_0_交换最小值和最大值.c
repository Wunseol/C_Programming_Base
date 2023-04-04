#include <stdio.h>
int main()
{
    int n,i,k=0,min,max,temp,h=0;
    static int a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
            k=i;
        }
    }
    temp=a[k];
    a[k]=a[0];
    a[0]=temp;
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            h=i;
        }
    }
    temp=a[h];
    a[h]=a[n-1];
    a[n-1]=temp;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int i,j=0,k=0,t,n,min,max,a[10];
//     scanf("%d",&n);
//     if(n==2){
//         scanf("%d %d",&a[0],&a[1]);
//         for(i=1;i>-1;i--){
//             printf("%d",a[i]);
//         }
//     }else{
//         scanf("%d",&a[0]);
//         max=a[0];
//         min=a[0];
//         for(i=1;i<n;i++){
//             scanf("%d",&a[i]);
//             if(max<a[i]){max=a[i];j=i;}
//             if(min<a[i]){min=a[i];k=i;}
//         }
//         t=a[k];a[k]=a[0];a[0]=t;
//         t=a[j];a[j]=a[n-1];a[n-1]=t;
//         for(i=0;i<n;i++){
//             printf("%d ",a[i]);
//         }
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int n,i,a[10],c,d,min,max,j;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         if(a[i]<min){
//             min=a[i];
//             j=i;
//         }
//     }
//     c=a[0];
//     a[0]=min;
//     a[j]=c;
//     for(i=0;i<n;i++){
//         if(a[i]>=max){
//             max=a[j];
//             j=i;
//         }
//     }
//     d=max;
//     a[j]=a[n-1];
//     a[n-1]=d;
//     for(i=0;i<n;i++){
//         printf("%d ",a[i]);   
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int n,i,big=-10,small=10,b,flag=0;
//     scanf("%d",&n);
//     int a[11];
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     big=a[0];
//     for(i=0;i<n;i++){
//         if(big<a[i]){
//             big=a[i];
//         }
//     }
//     small=a[0];
//     for(i=0;i<n;i++){
//         if(small>a[i]){
//             small=a[i];
//         }
//     }
//     printf("%d ",small);
//     for(i=0;i<n;i++){
//         if(a[i]!=big&&a[i]!=small&&flag==0){
//             printf("%d ",a[i]);
//         }else if(a[i]!=big&&a[i]!=small&&flag==1){
//             printf("%d ",a[i+1]);
//             i+=1;
//         }else if(a[i]!=big&&a[i]!=small&&flag==2){
//             printf("%d ",a[i+2]);
//         }else if((a[i]==big||a[i]==small)&&flag==1){
//             printf("%d ",a[i+2]);
//             flag=2;
//         }else if((a[i]==big||a[i]==small)&&flag==0){
//             printf("%d ",a[i+1]);
//             flag=1;
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n,i,a[10],min,max,flag=0,count=1;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     min=a[0];
//     max=a[0];
//     for(i=0;i<n;i++){
//         if(min>=a[i]){
//             min=a[i];
//         }
//     }
//     for(i=0;i<n;i++){
//         if(max<=a[i]){
//             max=a[i];
//         }
//     }
//     printf("%d ",min);
//     if(n!=1){
//         for(i=0;i<n;i++){
//         if(count==n-1){
//             break;
//         }
//         if(flag==0){
//             if(a[i]==max||a[i]==min){
//                 printf("%d ",a[i+1]);
//                 flag=1;
//                 count++;
//             }else{
//                 printf("%d ",a[i]);
//                 count++;
//             }
//             continue;
//         }
//         if(flag==1){
//             if(a[i+1]==max||a[i+1]==min){
//                 printf("%d ",a[i+2]);
//                 flag=2;
//                 count++;
//             }else{
//                 printf("%d ",a[i+1]);
//                 count++;
//             }
//             continue;
//         }
//         if(flag==2){
//             printf("%d ",a[i+2]);
//             count++;
//         }
//     }
//     printf("%d ",max);
//     }
//     return 0;
// }