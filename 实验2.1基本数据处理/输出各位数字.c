#include <stdio.h>
int main()
{
    int amount,a,b,c;
    scanf("%d",&amount);
    a=amount/100;
    b=((amount-a*100)-(amount-a*100)%10)/10;
    c=(amount-a*100-b*10);

    printf("%d,%d,%d",a,b,c);
    return 0;

}