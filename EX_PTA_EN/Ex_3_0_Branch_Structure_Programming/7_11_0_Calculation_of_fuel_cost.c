#include <stdio.h>
int main()
{
    
    double a,b,price=0;
    char ch;
    scanf("%lf %lf %c",&a,&b,&ch);
    if(ch=='m'){
        if(b==90){
            price=a*6.95*0.95;
            printf("%.2lf",price);
        }else if(b==93){
            price=a*7.44*0.95;
            printf("%.2lf",price);
        }else if(b==97){
            price=a*7.93*0.95;
            printf("%.2lf",price);
        }
    }else if(ch='e'){
        if(b==90){
            price=a*6.95*0.97;
            printf("%.2lf",price);
        }else if(b==93){
            price=a*7.44*0.97;
            printf("%.2lf",price);
        }else if(b==97){
            price=a*7.93*0.97;
            printf("%.2lf",price);

        }
    }
    return 0;

}