#include <stdio.h>
int main()
{
    int amount,a,b,c;
    scanf("%d",&amount);//������λ��
    a=amount/100;//��λ
    b=(amount/10)%10;//ʮλ
    c=amount%10;//��λ
    printf("%d,%d,%d",a,b,c);
    return 0;

}