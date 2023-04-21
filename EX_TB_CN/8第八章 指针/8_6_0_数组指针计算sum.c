#include <stdio.h>
int main()
{
    int i, n, a[10], *p;
    long sum = 0;
    printf("Enter n(n<=10):");
    scanf("%d", &n);
    printf("Enter %d integers:", n);   //ÊäÈëintegers(ÕûÊý)
    for( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for( i = 0; i < n; i++) {
        sum = sum + *(a+i);
    }
    printf("calculated by array, sum = %ld\n",sum);

    sum = 0;
    for( p = a; p < a+n; p++) {
        sum = sum + *p;
    }
    printf("calculated by pointer, sum = %ld\n",sum);
    
    return 0;

}