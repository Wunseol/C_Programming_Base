#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void delchar( char *str, char c ){
    char *s;//�����ַ���ָ�����s
    s=str;//��str��ַ����s��ַ
    while (*str!='\0') {//��str���ݲ�����'\0'ʱ��
        if(*str!=c){//���str��������ĸc
            *s++=*str;
        }
        str++;
    }
    *s=*str;
}
// void delchar( char *str, char c )
// {
//     int i,j=1;
//     for(i=0;i<MAXN;i++){
//         if(str[i]==c){
//             str[i]=str[i+j];
//             j=j+1;
//         }
//     }
// }
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