#include <stdio.h>

void month_day(int year, int year_day, int *pmonth, int *pday);


int main()
{
    int day, month, year, year_day;
    printf("input year and year_day:");
    scanf("%d %d", &year, &year_day);
    month_day(year, year_day, &month, &day );
    printf("%d-%d-%d\n", year, month, day);
    return 0;

}

void month_day( int year, int year_day, int *pmonth, int *pday)
{
    int k,leap;
    int tab[2][13]= {
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31},
    };

    leap = (year%4 == 0 && year%100 != 0) || year%400 == 0;

    for( k = 1;year_day>tab[leap][k];k++){
        year_day -= tab[leap][k];
    }
    *pmonth = k;
    *pday = year_day;

}