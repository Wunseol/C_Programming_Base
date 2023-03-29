#include <stdio.h>
struct book
{
    char name[31];
    double price;
}b[10];
int main()
{
    int i,n,minsign=0,maxsign=0;
    char c;
    double min=1000,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%c",&c);//读入缓冲区的\n;
        gets(b[i].name);
        scanf("%lf",&b[i].price);
    }
    for(i=0;i<n;i++){
        if(b[i].price<min){
            min=b[i].price;
            minsign=i;
        }
        if(b[i].price>max){
            max=b[i].price;
            maxsign=i;
        }
    }
    printf("%.2lf, %s\n",b[maxsign].price,b[maxsign].name);
    printf("%.2lf, %s\n",b[minsign].price,b[minsign].name);
    return 0;
}