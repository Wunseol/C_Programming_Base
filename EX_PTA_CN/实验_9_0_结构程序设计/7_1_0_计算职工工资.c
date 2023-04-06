#include <stdio.h>
#define N 1000
struct money
{
    char name[15];
    double basemoney;
    double flatmoney;
    double use;
    double income;
}menber[1000];

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %lf %lf %lf",&menber[i].name,&menber[i].basemoney,&menber[i].flatmoney,&menber[i].use);
    }
    
    for(i=0;i<n;i++){
        printf("%s %.2lf\n",menber[i].name,menber[i].income=(menber[i].basemoney+menber[i].flatmoney-menber[i].use)*1.0);
    }
    return 0;
}