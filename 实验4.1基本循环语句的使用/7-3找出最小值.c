#include <stdio.h>
int main()
{
    int n1,n2,min,i;
    scanf("%d",&n1);
    scanf("%d",&n2);
    min=n2;
    i=2;
    while (i<n1)
    {
        i++;
        scanf("%d",&n2);
        if(min>n2){
            min=n2;
            
        }
    }
    printf("min = %d",min);
    return 0;
      
}