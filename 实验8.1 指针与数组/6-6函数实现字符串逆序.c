#include <stdio.h>
#define MAXS 20

void f( char *p );
void ReadString( char *s ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char s[MAXS];

    ReadString(s);
    f(s);
    printf("%s\n", s);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void f( char *p )
{
    char a;
    int i,j,t=0;
    while(p[i]!='\0'){
        i++;
    }
    j=i-1;
    for(;t<=j;j--,t++){
        a=p[t];
        p[t]=p[j];
        p[j]=a;
    }
}
void ReadString( char *s )
{
    int i,k;
    k=0;
    while((s[k]=getchar())!='\n'){
        k++;
    }
    s[k]='\0';
}