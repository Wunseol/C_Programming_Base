#include <stdio.h>
int main()
{
    int flag,money,n1,n2,n5;
    flag=1;
    printf("Enter money:");
    scanf("%d",&money);
    for(n5=money/5;(n5>=0)&&(flag==1);n5--){
        for(n2=(money-n5*5)/2;(n2>=0)&&(flag==1);n2--){
            for(n1=money-n5*5-n2*2;(n1>=0)&&(flag==1);n1--){
                if((n5*5+n2*2+n1)==money){
                    printf("fen5:%d,fen:%d,fen1:%d,total:%d\n",n5,n2,n1,n1+n2+n5);
                    flag=0;
                }
            }
        }
    }
    return 0;
}