#include <stdio.h>
int main()
{
    int n,now=2,born=0,alive=0,i=1;
    scanf("%d",&n);
    if(n==1)
    printf("1");
    else{
        while (alive<n*2)
        {
            alive=now+born;
            born=now;
            now=alive;
            i++;

        }
        printf("%d",i);
        
    }
    return 0;
}