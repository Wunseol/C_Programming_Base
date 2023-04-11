#include <stdio.h>
int main()
{
    int number;
    printf("Entre a number:");
    scanf("%d",&number);
    do{
        printf("%d ",number%10);
        number/=10;

    }while(number!=0);
    return 0;
}