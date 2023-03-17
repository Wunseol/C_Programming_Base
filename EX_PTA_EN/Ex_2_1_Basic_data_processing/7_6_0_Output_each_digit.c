#include <stdio.h>
int main()
{
    int amount,a,b,c;
    scanf("%d",&amount);//输入三位数
    a=amount/100;//百位
    b=(amount/10)%10;//十位
    c=amount%10;//个位
    printf("%d,%d,%d",a,b,c);
    return 0;

}