#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,value1,value2,complex;
    scanf("%lf %lf %lf",&a,&b,&c);

    // /deta是变化值
    
    double deta = b*b-4*a*c;
    
    if(a==0&&b==0){
        if(c==0){
            printf("Zero Equation");
        }else{
            printf("No An Equation");
        }
    }else{
        if(deta==0){
            value1=(-1*b)/(2*a);
            printf("%.2lf",value1);
        }else if(deta>0){
            if(a==0){
                value1=(-1)*(c/b);
                printf("%.2lf",value1);
            }else{
                value1=(-1*b-sqrt(deta))/(2*a);
                value2=(-1*b+sqrt(deta))/(2*a);
                printf("%.2lf\n%.2lf",value1,value2);
            }
        }else{
            value2=sqrt(-1*deta)/(2*a);
            value1=(-1)*(b/(2*a));
            if(b==0){
                printf("0.00+%.2lfi\n0.00-%.2lfi",value2,value2);
            }else{
                complex=(value2>0) ? value2:(-1)*value2;
                printf("%.2lf+%.2lfi\n%.2lf%.2lfi",value1,complex,value1,-1*complex);
            }
        }
    }
    return 0;
    
}