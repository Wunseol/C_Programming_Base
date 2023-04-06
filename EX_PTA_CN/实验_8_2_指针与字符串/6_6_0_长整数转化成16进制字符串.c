#include <stdio.h>
#define MAXN 10

void f( long int x, char *p );

int main()
{
    long int x;
    char s[MAXN] = "";

    scanf("%ld", &x);
    f(x, s);
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void f( long int x, char *p )
{
    int len=0;
    long int i,item;
    if(x<0){
        x=-x;
        *p='-';
        len++;
    }
    if(x==0){
        *p='0';
    }
    for(item=x;item>0;item/=16){
        len++;
    }
    for(i=0;i<MAXN;i++)
    {
        item=x%16;
        x=x/16;
        if(item<10)
        *(p+len-1-i)=item+'0';
        else
        *(p+len-1-i)=item-10+'A';
        if(x==0)
        break;

    }
}