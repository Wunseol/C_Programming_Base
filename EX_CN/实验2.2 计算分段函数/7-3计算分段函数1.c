#include <stdio.h>
int main()
{
    float x,r;

    scanf("%f",&x);
    if(x!=0){r=1/x;}
    else{if(x==0){r=0.0;}}
    printf("f(%.1lf) = %.1lf",x,r);
    return 0;

}