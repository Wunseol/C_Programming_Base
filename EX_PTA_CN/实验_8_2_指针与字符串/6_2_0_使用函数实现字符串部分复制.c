#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
// void strmcpy( char *t, int m, char *s )
// {
//     int i,j;
//     i=m-1,j=0;
//     while(t[i]!='\0')
//     s[j++]=t[i++];
//     s[j]='\0';
// }

void strmcpy( char *t, int m, char *s )
{
    int i,j=0;
    i=m-1;
    while(t[i]!='\0'){
        s[j]=t[i];
        i++;
        j++;
    }
    s[j]='\0';
}
void ReadString( char s[] )
{
    int i,j;
    for(i=0;i<MAXN;i++){
        scanf("%c",&s[i]);
        if(s[i]=='\n'){
            break;
        }
    }
}