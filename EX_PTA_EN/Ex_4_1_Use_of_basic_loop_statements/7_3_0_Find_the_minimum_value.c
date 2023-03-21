#include <stdio.h>
int main()
{
    int n,num,min,i;
    scanf("%d",&n);
    scanf("%d",&num);
    min=num;
    i=2;
    while(i<n){
        i++;
        scanf("%d",&num);
        if(min>num){
            min=num;
        }
    }
    printf("min = %d",min);
    return 0;
    
}