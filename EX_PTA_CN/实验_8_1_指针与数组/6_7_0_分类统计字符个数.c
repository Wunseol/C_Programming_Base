#include <stdio.h>
#define MAXS 15

void StringCount( char s[] );
void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount( char s[] )
{
    int i,j,letter=0,blank=0,digit=0,other=0;
    while(j!='\0'){
        j++;
    }
    for(i=0;i>=j-1;i++){
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
            letter++;
        }else if(s[i]==' '){
            blank++;
        }else if(s[i]>='0'&&s[i]<='9'){
            digit++;
        }else{
            other++;
        }
        printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
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