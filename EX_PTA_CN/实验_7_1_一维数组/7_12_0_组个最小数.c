#include <stdio.h>
int main()
{
    int a[11];
    int flag=0,i,s=0,c=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    while(s!=c){
        for(i=0;i<10;i++){
            if(a[i]>0){
                if(flag==0){
                    if(i!=0){
                        printf("%d",i);
                        a[i]--;
                        flag=1;
                        c++;
                        break;
                    }
                }
                if(flag==1){
                    printf("%d",i);
                    a[i]--;
                    c++;
                    break;
                }
            }
        }
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a[10];
//     int i,j,m,n;
//     n=0;
//     for(i=0;i<10;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<9;i++){
//         for(j=i+1;j<10;j++){
//             if(a[j]<a[i]){
//                 m=a[j];
//                 a[j]=a[i];
//                 a[i]=m;
//             }
//         }
//     }
//     for(i=0;i<10;i++){
//         if(a[i]==0){
//             n+=1;
//         }
//     }
//     a[0]=a[n];
//     a[n]=0;
//     for(i=0;i<10;i++){
//         printf("%d",a[i]);
//     }
//     return 0;
// }