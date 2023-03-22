#include <stdio.h>

//应返回number中digit出现的次数
int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int CountDigit( int number, int digit )
{
    int count=0,flag;
    if(number<0){
        number=number*-1;
    }
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