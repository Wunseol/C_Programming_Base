#include <stdio.h>
int main()
{
    int g;
    scanf("%d",&g);
    if(g>=90){
        printf("A\n");
    }else if(g>=80&&g<90){
        printf("B\n");
    }else if(g>=70&&g<80){
        printf("C\n");
    }else if(g>=60&&g<70){
        printf("D\n");
    }else{
        printf("E\n");
    }
    return 0;
    
}