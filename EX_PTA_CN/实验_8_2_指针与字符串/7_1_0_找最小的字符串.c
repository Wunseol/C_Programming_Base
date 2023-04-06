#include <stdio.h>
#include <string.h>
#define N 81 
int main()
{
    char s[N],min[N];
    int i,n;
    scanf("%d",&n);
    getchar();
    gets(min);
    for(i=1;i<n;i++){
        gets(s);
        if(strcmp(s,min)<0)
        {
            strcpy(min,s);
        }
    }
    printf("Min is: %s\n",min);

}

// #include <stdio.h>
// #define N 81
// int main()
// {
//     int i,n;
//     char ch[n][N];
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         gets(ch[i]);
//     }
//     for(i=0;i<n;i++){
//         if(ch[0][N]<ch[i][N]){
//             ch[0][N]=ch[i][N];
//         }
//     }
//     printf("Min is: %s",ch[0][N]);
//     return 0;
// }