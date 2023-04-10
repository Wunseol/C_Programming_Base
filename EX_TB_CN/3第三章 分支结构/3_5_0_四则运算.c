#include <stdio.h>
int main()
{
    double value1,value2;
    char op;
    printf("Type in an exprssion:");
    scanf("%lf%c%lf",&value1,&op,&value2);
    if(op=='+'){
        printf("=%.2f\n",value1+value2);
    }else if(op=='-'){
        printf("=%.2f\n",value1-value2);
    }else if(op=='*'){
        printf("=%.2f\n",value1*value2);
    }else if(op=='/'){
        if(value2!=0){
            printf("=%.2f\n",value1/value2);
        }else{
            printf("Divisor can not be 0!\n");
        }
    }else{
        printf("Unknown operator!");
    }
    return 0;
}