// #include <stdio.h>
// int compare(int count[10]);
// int main()
// {
//     int i,k,n=1,b,flag=1,bigger=0;
//     int count[10]={0,0,0,0,0,0,0,0,0,0};

//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++){
//         while(a[i]!=0){
//             b=a[i]%10;
//             a[i]/=10;
//             switch (b)
//         {
//             case 0:count[0]++;break;
//             case 1:count[1]++;break;
//             case 2:count[2]++;break;
//             case 3:count[3]++;break;
//             case 4:count[4]++;break;
//             case 5:count[5]++;break;
//             case 6:count[6]++;break;
//             case 7:count[7]++;break;
//             case 8:count[8]++;break;
//             case 9:count[9]++;break;
//         default:
//             break;
//         }
//         }
//     }
//         for(i=0;i<10;i++){
//             if(bigger<count[i]){
//                 bigger=count[i];
//             }
//         }
//         printf("%d:",bigger);
//         for(k=0;k<10;k++){
//             if(bigger==count[k]){
//                 count[k]=k;
//                 printf(" %d",count[k]);
//             }
//     }     
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n,i;
    int number[10]={0};
    int max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        if(a == 0)
        {
            number[0]++;
        }
        while(a>0){
            number[a%10]++;
            a/=10;
        }
    }
    for(i=0;i<10;i++){
        if(max<number[i]){
            max=number[i];
        }
    }
    printf("%d:",max);
    for(i=0;i<10;i++){
        if(max==number[i]){
            printf(" %d",i);
        }
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n,i,number,max=0,a[10]={0};
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&number);
//         while(number>0){
//             a[number%10]++;
//             number/=10;
//         }
//     }
//     for(i=0;i<10;i++){
//         if(max<a[i]){
//             max=a[i];
//         }
//     }
//     printf("%d:",max);
//     for(i=0;i<10;i++){
//         if(max==a[i]){
//             printf(" %d",i);
//         }
//     }
//     return 0;
// }