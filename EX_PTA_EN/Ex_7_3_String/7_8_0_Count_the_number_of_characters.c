#include <stdio.h>
#include <string.h>
int main()
{
    char n,a[80];
    gets(a);
    scanf("%c",&n);
    int len=strlen(a),k=0;
    for(int i=0;i<len;i++){
        if(a[i]==n){
            k++;
        }
    }
    printf("%d",k);
    return 0;
}