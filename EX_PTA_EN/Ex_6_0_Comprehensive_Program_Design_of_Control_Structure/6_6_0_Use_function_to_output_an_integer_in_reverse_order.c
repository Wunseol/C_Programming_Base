#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

int reverse(int number)
{
    int j,i,a,b,n=1,amount=0,flag=1;
    a=number;
    for(j=1;;j++){
        a=a/10;
        if(a<=0){
            a=-a;
        }
        if(a>0){
            n++;

        }else{
            break;
        }
    }
    if(number<0){
        number=-number;
        flag=-1;
    }
    for(i=1;i<=n;i++){
        a=number%10;
        number=number/10;
        amount=(amount+a)*10;
    }
    amount/=10;
    amount*=flag;
    return amount;
}