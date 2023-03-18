#include <stdio.h>
int main()
{
    int t,t1,t2,h,h1,h2,m,m1,m2;
    scanf("%d %d",&t1,&t2);
    h1=t1/100;
    h2=t2/100;
    h=h2-h1;
    m1=t1%100;
    m2=t2%100;
    m=m2-m1;
    if(m<0){
        m=m+60;
        h=h-1;
    }
    printf("%.02d:%.02d",h,m);
    return 0;
    
}