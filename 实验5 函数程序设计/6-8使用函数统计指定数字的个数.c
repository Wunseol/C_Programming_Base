#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* 你的代码将被嵌在这里 */
int CountDigit( int number, int digit )
{
    int count=0,flag;
    if(number<0){number=number*-1;}
    while(number>10){
        flag=number%10;
        number=number/10;
        if(flag==digit){
            count++;
        }

    }
    if(number==digit){
        count+=1;
    }
    return count;
}