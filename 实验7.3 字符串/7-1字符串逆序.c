#include <stdio.h>
#include <string.h>
int main()
{
    int i,k;
    char line[80];
    k=0;
    while((line[k]=getchar())!='\n'){
        k++;
    }
    line[k]='\0';
    for(i=k-1;i>=0;i--){
        printf("%c",line[i]);
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #define MAXN 80
// int main()
// {
//     char str[MAXN];
//     int len,i;
//     gets(str);
//     len=strlen(str);
//     for(i=len-1;i>=0;i--){
//         printf("%c",str[i]);
//     }
//     return 0;
    
// }