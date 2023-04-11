#include <stdio.h>
int main()
{
    int count,number,t_number;
    count=0;
    printf("Enter a number:");
    scanf("%d",&number);
    t_number=number;
    if(number<0){
        t_number=-t_number;
    }
    do{
        count++;
        t_number/=10;
    }while(number!=0);
    printf("It contains %d digits.\n",count);
    return 0;
}