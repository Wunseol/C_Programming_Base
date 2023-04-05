#include <stdio.h>
int main()
{
    char a[90];
    int i,j;
    int medi=0;
    int len=0;
    medi=getchar();
    for(i=0;medi!='\n';i++){
        a[i]=medi;
        len++;
        medi=getchar();
    }
    for(i=0;i<127;i++){
        for(j=0;j<len;j++){
            if(a[j]==i){
                printf("%c",a[j]);
                break;
            }
        }
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     char a[90],ch;
//     int b=0,c=1,d,e;
//     a[0]=getchar();
//     while((ch=getchar())!='\n'){
//         b=0;
//         for(d=0;d=c;d++){
//             if(a[d]==ch){
//                 b=1;
//                 break;
//             }
//         }
//         if(b==0){
//             a[c]=ch;
//             c++;
//         }
//     }
//     for(b=0;b<c;b++){
//         for(d=1;d<c;d++){
//             if(a[d]<a[d-1]){
//                 e=a[d],a[d]=a[d-1],a[d-1]=e;
//             }
//         }
//     }
//     for(b=0;b<c;b++){
//         printf("%c",a[b]);
//     }
//     return 0;
// }