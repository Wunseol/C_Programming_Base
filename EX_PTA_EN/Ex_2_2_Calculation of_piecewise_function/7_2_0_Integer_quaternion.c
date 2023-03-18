#include <stdio.h>
int main()
{
    int num1,num2,add,subtract,multiply,divide;
    scanf("%d %d",&num1,&num2);
    add=num1+num2;
    subtract=num1-num2;
    multiply=num1*num2;
    divide=num1/num2;
    printf("%d + %d = %d\n",num1,num2,add);
    printf("%d - %d = %d\n",num1,num2,subtract);
    printf("%d * %d = %d\n",num1,num2,multiply);
    printf("%d / %d = %d\n",num1,num2,divide);
    return 0;   

}