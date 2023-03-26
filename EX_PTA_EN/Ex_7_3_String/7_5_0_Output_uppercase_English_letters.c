#include <stdio.h>
#include <string.h>
int main()
{
    int c=0,m,d=0;
    char s[100];
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    {
        for(m=i-1;m>=0;m--){
            if(s[m]==s[i]){
                d++;
            }
        }
        if(s[i]<='Z'&&'A'<=s[i]&&d==0){
            printf("%c",s[i]);
            c++;
        }
        d=0;
    }
    if(c==0){
        printf("Not Found");
    }
    return 0;
}