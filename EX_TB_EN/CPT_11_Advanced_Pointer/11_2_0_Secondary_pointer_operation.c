#include <stdio.h>
int main()
{
    int a = 10, b = 20, t;
    int *pa = &a, *pb = &b, *pt;
    int **ppa = &pa, **ppb = &pb, **ppt;

    // δ����ʱ
    printf("%d %d \n%d %d \n%d %d\n",a,b,*pa,*pb,**ppa,**ppb);
    printf("\n");

    ppt=ppb;
    ppb=ppa;
    ppa=ppt;

    // ����ppa��ppb��ֵ��
    // printf("%d %d \n%d %d \n%d %d\n",a,b,pa,pb,ppa,ppb);
    printf("%d %d \n%d %d \n%d %d\n",a,b,*pa,*pb,**ppa,**ppb);
    printf("\n");
    
    pt = pb;
    pb = pa;
    pa = pt;
    
    // ����pa��pb��
    // printf("%d %d \n%d %d \n%d %d\n",a,b,pa,pb,ppa,ppb);
    printf("%d %d \n%d %d \n%d %d\n",a,b,*pa,*pb,**ppa,**ppb);
    printf("\n");

    t = b;
    b = a;
    a = t;
    
    // ����a��b��
    // printf("%d %d \n%d %d \n%d %d\n",a,b,pa,pb,ppa,ppb);
    printf("%d %d \n%d %d \n%d %d\n",a,b,*pa,*pb,**ppa,**ppb);
    printf("\n");


}