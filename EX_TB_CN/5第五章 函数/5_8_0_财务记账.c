#include <stdio.h>
double cash;
int main()
{
    int choice;
    double value;
    void income(double number),expend(double number);
    cash=0;
    printf("Enter operate choice(0--end,1--income,2--expend):");
    scanf("%d",&choice);
    while(choice!=0){
        if(choice==1||choice==2){
            printf("Enter cash value:");
            scanf("%lf",&value);
            if(choice==1){
                income(value);
            }else{
                expend(value);
            }
            printf("currnrt cash:%.2f\n",cash);
        }
        printf("Enter operate choice(0--end,1--income,2--expend:");
        scanf("%d",&choice);
    }
    return 0;
}
void income(double number)
{
    cash=cash+number;
}
void expend(double number)
{
    cash=cash-number;
}