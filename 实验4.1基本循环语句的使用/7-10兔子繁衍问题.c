#include <stdio.h>
int main()
{
    int n,now=2,bore=0,alive=0,i=1;
    scanf("%d",&n);
    if(n==1)
    printf("1");
    else{
        while (alive<n*2)
        {
            alive=now+bore;
            bore=now;
            now=alive;
            i++;

        }
        printf("%d",i);
        
    }
    return 0;
}