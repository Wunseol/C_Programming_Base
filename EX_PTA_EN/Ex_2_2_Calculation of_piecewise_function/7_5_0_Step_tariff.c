#include <stdio.h>
int main()
{
    double kw,cost;
    scanf("%lf",&kw);
    if(kw<0){
        printf("Invalid Value!"); 
    }else if(kw<=50){
        printf("cost = %.2lf",cost=kw*0.53);
    }else{
        printf("cost = %.2lf",cost=50*0.53+(kw-50)*0.58);
    }
    return 0;
    
}