#include <stdio.h>
int main()
{
    int n,i,j;
    char x=64;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            x+=1;
            printf("%c ",x);
        }
        printf("\n");
    }
    return 0;
}