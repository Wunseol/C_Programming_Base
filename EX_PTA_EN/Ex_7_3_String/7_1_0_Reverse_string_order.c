#include <stdio.h>
#include <string.h>
int main()
{
    int k=0;
    char str[80];
    while((str[k]=getchar())!='\n'){//���������ַ�ֱ���س�
        k++;
    }
    str[k]='\0';
    for(int i=k-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}