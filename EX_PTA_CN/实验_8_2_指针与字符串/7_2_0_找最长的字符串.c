#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n][80];
    int i,temp,max=0;
    for(i=0;i<n;i++){
        scanf("%s",&a[i]);
        if(strlen(a[i])>max){
            max=strlen(a[i]);
            temp=i;
        }
    }
    printf("The longest is: %s",a[temp]);
    return 0;
}


// #include <stdio.h>
// #include <string.h>
// #define N 81
// int main()
// {
//     int i,n;
//     char s[N],max[N];
//     scanf("%d",&n);
//     getchar();
//     gets(max);
//     for(i=1;i<n;i++){
//         gets(s);
//         if(strcmp(s,max)>0){
//             strcpy(max,s);
//         }
//     }
//     printf("The longest is: %s\n",max);
//     return 0;
// }