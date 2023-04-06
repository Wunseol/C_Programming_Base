#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
bool palindrome( char *s )
{
    int i=0;
    while (s[i]!='\0')
    {
        i++;
    }
    int k;
    k=i-1;
    i=0;
    while(i<k){
        if(s[i]!=s[k]){
            break;
        }
        i++;
        k--;
    }
    if(i>=k){
        return true;
    }else{
        return false;
    }
}