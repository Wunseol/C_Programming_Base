#include <stdio.h>
#include <math.h>
int main()
{
    int count,i,k,flag,limit,m,n;
    printf("Enter m n:");
    scanf("%d%d",&m,&n);
    count=0;
    if(m<1||n>500||m>n){
        printf("Invalid.\n");
    }else{
        for(k=m;k<=n;k++){
            if(k<=1){
                flag=0;
            }else if(k==2){
                flag=1;
            }else{
                flag=1;
                limit=sqrt(k)+1;
                for(i=2;i<=limit;i++){
                    if(k%i==0){
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==1){
                printf("%6d",k);
                count++;
                if(count%10==0){
                    printf("\n");
                }
            }
        }
    }
    return 0;
}