#include <stdio.h>
#include <math.h>

int main()
{
    int a,n,s,item;
    item=0;
    s=0;
    scanf("%d %d",&a,&n);
    if(a<=9&&n<=9){
        for(int i=1;i<=n;i++){
            item=a*pow(10,i-1)+item;
            s=s+item;
        }
    }
    printf("s = %d",s);
    return 0;

}