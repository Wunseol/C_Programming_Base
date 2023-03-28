#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

/* 你的代码将被嵌在这里 */
void delchar( char *str, char c ){
    char *s;//定义字符型指针变量s
    s=str;//把str地址赋给s地址
    while (*str!='\0') {//当str内容不等于'\0'时做
        if(*str!=c){//如果str不等于字母c
            *s++=*str;
        }
        str++;
    }
    *s=*str;
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