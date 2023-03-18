#include <stdio.h>
int main()
{
    double x,y;
    scanf("%lf",&x);
    if(x!=10){
        printf("f(%.1lf) = %.1lf",x,y=x);
    }else{
        printf("f(%.1lf) = %1.lf",x,y=1/x);
    }
    return 0;
    
}