#include <stdio.h>
int main()
{
    int flag=0;
    char ch;
    int count=0;
    while(scanf("%c",&ch)&&ch!='\n'){
        if(ch!=' '&&flag==0){
            count++;
            flag=1;
        }
        if(ch==' '&&flag==1){//±ÜÃâ¶à¸ö¿Õ¸ñÅĞ¶Ï´íÎó
            flag=0;
        }
    }
    printf("%d",count);
    return 0;
}