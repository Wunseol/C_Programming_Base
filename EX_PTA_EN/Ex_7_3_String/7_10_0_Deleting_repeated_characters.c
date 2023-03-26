#include <stdio.h>
int main()
{
    char a[90];
    int i,j;
    int medi=0;
    int len=0;
    medi=getchar();
    for(i=0;medi!='\n';i++){
        a[i]=medi;
        len++;
        medi=getchar();
    }
    for(i=0;i<127;i++){
        for(j=0;j<len;j++){
            if(a[j]==i){
                printf("%c",a[j]);
                break;
            }
        }
    }
    return 0;
}