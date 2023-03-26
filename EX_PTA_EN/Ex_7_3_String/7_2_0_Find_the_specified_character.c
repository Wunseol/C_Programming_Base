#include <stdio.h>

int main()
{
    int len=0,index=-1;

    char target,ch,str[80];

    scanf("%c\n",&target);

    ch=getchar();

    for(int i=0;ch!='\n';i++){
        str[i]=ch;
        len++;
        ch=getchar();
    }

    for(int i=0;i<len;i++){
        if(target==str[i])index=i;
    }

    if(index!=-1){
        printf("index = %d",index);
    }else{
        printf("Not Found");
    }

    return 0;
}