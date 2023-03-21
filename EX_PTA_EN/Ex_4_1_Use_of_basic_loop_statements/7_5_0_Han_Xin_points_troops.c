#include <stdio.h>
int main()
{
    int x=0;
    for(x=0;;x++){
        if(x%5==1&&x%6==5&&x%7==4&&x%11==10){
            printf("%d",x);
            break;
        }
    }
    return 0;
    
}