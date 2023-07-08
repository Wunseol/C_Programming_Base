#include <stdio.h>
int day_of_year(int year,int month,int day);
int main()
{
    int i,j,n;
    int year,month,day;
    printf("Enter year,month,day:");
    scanf("%d %d %d",&year,&month,&day);
    printf("the day is:%d\n",day_of_year(year,month,day));
}
int day_of_year(int year,int month,int day)
{
    int k,leap;
    int tab[2][13]={
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}
    };
    leap=(year%4==0&&year%100!=0||year%400==0);
    for(k=1;k<month;k++){
        day=day+tab[leap][k];
    }
    return day;
}