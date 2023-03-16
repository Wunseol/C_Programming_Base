#include <stdio.h>
#include <math.h>
int main()
{
    double x,r;
    scanf("%lf",&x);
    if(x>=0){r=pow(x,0.5);}
    else{r=pow(x+1,2)+2*x+1/x;}
    printf("f(%.2lf) = %.2lf",x,r);
    return 0;
    


}