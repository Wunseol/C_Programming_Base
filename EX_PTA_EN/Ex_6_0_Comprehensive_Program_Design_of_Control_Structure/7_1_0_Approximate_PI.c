#include <stdio.h>
int main()
{
    double PI=0;//³õÊ¼»¯PI
    double eps,item=1;
    scanf("%le",&eps);
    for(int i=1;item>=eps;i++){
        PI=PI+item;
        item=item*i/(2*i+1);
    }
    PI+=item;
    printf("PI = %.5lf",PI*2);
    return 0;
}