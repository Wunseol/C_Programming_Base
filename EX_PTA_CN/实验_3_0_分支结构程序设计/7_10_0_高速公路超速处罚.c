#include <stdio.h>
int main()
{
    int a,b;
    double r;
    char ch='%';
    scanf("%d %d",&a,&b);
    r=a*1.0/b;
   

    if(r>=1.1&&r<1.5){
        printf("Exceed %.0lf%c. Ticket 200",r=r*100-100,ch);
    }else if(r<1.1){
        printf("OK");
    }else if(r>=1.5){
        printf("Exceed %.0lf%c. License Revoked",r=r*100-100,ch);
    }
    return 0;
}