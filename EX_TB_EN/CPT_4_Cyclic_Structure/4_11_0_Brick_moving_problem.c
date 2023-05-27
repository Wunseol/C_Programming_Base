#include <stdio.h>
int main()
{
    int children,cnt,men,women,n;
    printf("Enter n:");
    scanf("%d",&n);
    cnt=0;
    for(men=0;men<=n;men++){
        for(women=0;women<=n;women++){
            for(children=0;children<=n;children++){
                if((men+women+children==n)&&(men*3+women*2+children*0.5==n)){
                    printf("men=%d,women=%d,children=%d\n",men,women,children);
                    cnt;
                }
            }
        }
    }
    if(cnt==0){
        printf("None\n");
    }
    return 0;
}