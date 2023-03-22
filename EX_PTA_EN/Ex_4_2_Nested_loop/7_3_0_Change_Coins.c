#include <stdio.h>
int main()
{
    int changes,fen5,fen2,fen1,total,count=0;
    scanf("%d",&changes);
    if(changes>8&&changes<100){
        for(fen5=changes/5;fen5>0;fen5--){
            for(fen2=changes/2;fen2>0;fen2--){
                for(fen1=changes/1;fen1>0;fen1--){
                    if(5*fen5+2*fen2+1*fen1==changes){
                        count++;
                        total=fen5+fen2+fen1;
                        printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",fen5,fen2,fen1,total);
                    }
                }
            }
        }
    }
    printf("count = %d",count);
    return 0;

}