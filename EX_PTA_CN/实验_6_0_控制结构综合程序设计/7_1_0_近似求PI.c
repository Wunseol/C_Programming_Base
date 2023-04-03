// #include <stdio.h>
// int main()
// {
//     double i=1;
//     double eps,sum=0,re=1;
//     scanf("%le",&eps);
//     while(re>=eps){
//         sum+=re;
//         re=re*i/(2*i+1);
//         i++;
//     }
//     sum+=re;
//     printf("PI = %.5lf",sum*2);
//     return 0;
// }

#include <stdio.h>
int main()
{
    double i,eps,PI=0,item=1;
    scanf("%le",&eps);
    for(i=1;item>=eps;i++){
        PI=PI+item;
        item=item*i/(2*i+1);
    }
    PI+=item;
    printf("PI = %.5lf",PI*2);
    return 0;
}

// #include <stdio.h>
// int fact( int number);
// int main()
// {
//     int sum=1,i;
//     double eps,n,b,PI=0,item=1,a=1;
//     scanf("%le", &eps);
//     // while (eps!=1)
//     // {
//     //     n++;
//     //     eps*=10;
//     // }
//     b=a;
//     for(i=0;item>eps;i++){
//         item=fact(i)/a;        
//         PI=PI+item;
//         b+=2;
//         a=a*b;
//     }
//     printf("PI = %.5lf",PI*2);
//     return 0;
// }
// int fact(int number)
// {
//     int i,sum=1;

//     for(i=1;i<=number;i++){
//         sum=i*sum;
//     }
//     return sum;
// }