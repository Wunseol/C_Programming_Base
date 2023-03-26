#include <stdio.h>
#include <string.h>
int main()
{
    int len;
    char s[85];
    gets(s);
    len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]='A'+'Z'-s[i];
        }
    }
    puts(s);
    return 0;
}