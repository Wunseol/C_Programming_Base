#include <stdio.h>
int main()
{
    int m;
    double r;
    scanf("%d",&m);
    if(m<=1600){
        printf("0.00");
    }else if(m>1600&&m<=2500){
        r=0.05*(m-1600);
        printf("%.2lf",r);
    }else if(m>2500&&m<=3500){
        r=0.10*(m-1600);
        printf("%.2lf",r);
    }else if(m>3500&&m<=4500){
        r=0.15*(m-1600);
        printf("%.2lf",r);
    }else if(m>4500){
        r=0.20*(m-1600);
        printf("%.2lf",r);
    }
    return 0;
    
}