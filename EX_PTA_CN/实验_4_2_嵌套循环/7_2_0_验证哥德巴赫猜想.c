#include <stdio.h>
int main()
{
    int N,a,b;
    scanf("%d",&N);
    int p,q;
    p=2;
    while(1){
        a=1;
        for(int i=2;i*i<=p;i++)
        if(p%i==0){
            a=0;
            break;
        }
        if(a){
            a=1;
            q=N-p;
            for(int i=2;i*i<=q;i++){
                if(q%i==0){
                    a=0;
                    break;
                }
            }
            if(a){
                if(p>q){
                    b=p;
                    p=q;
                    q=b;
                }
                printf("%d = %d + %d",N,p,q);
                break;
            }
        }
        p++;
    }
    return 0;
}