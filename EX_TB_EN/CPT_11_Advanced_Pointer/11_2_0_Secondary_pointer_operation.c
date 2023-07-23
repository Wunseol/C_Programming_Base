#include <stdio.h>
int main()
{
    int a = 10, b = 20, t;
    int *pa = &a, *pb = &b, *pt;
    int **ppa = &pa, **ppb = &pb, **ppt;

    // 未交换时
    printf("%d %d \n%d %d \n%d %d\n",a,b,*pa,*pb,**ppa,**ppb);
    printf("\n");

    ppt=ppb;
    ppb=ppa;
    ppa=ppt;

    // 交换ppa和ppb的值后
    // printf("%d %d \n%d %d \n%d %d\n",a,b,pa,pb,ppa,ppb);
    printf("%d %d \n%d %d \n%d %d\n",a,b,*pa,*pb,**ppa,**ppb);
    printf("\n");
    
    pt = pb;
    pb = pa;
    pa = pt;
    
    // 交换pa和pb后
    // printf("%d %d \n%d %d \n%d %d\n",a,b,pa,pb,ppa,ppb);
    printf("%d %d \n%d %d \n%d %d\n",a,b,*pa,*pb,**ppa,**ppb);
    printf("\n");

    t = b;
    b = a;
    a = t;
    
    // 交换a和b后
    // printf("%d %d \n%d %d \n%d %d\n",a,b,pa,pb,ppa,ppb);
    printf("%d %d \n%d %d \n%d %d\n",a,b,*pa,*pb,**ppa,**ppb);
    printf("\n");


}