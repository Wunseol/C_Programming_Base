#include <stdio.h>

int main()
{
    int n,max,min,tmp,res,dif;
    scanf("%d",&n);
    if(n%111==0){
        printf("1: %d - %d = 0",n,n);
    }else{
        int count=1;
        do{
            int num[3]={n/100,n/10%10,n%10};
            for(int i=0;i<2;i++){
                for(int j=0;j<2-i;j++){
                    if(num[j]>num[j+1]){
                        tmp=num[j];
                        num[j]=num[j+1];
                        num[j+1]=tmp;
                    }
                }
            }
            min=num[0]*100+num[1]*10+num[2];
            max=num[2]*100+num[1]*10+num[0];
            n=max-min;
            printf("%d: %d - %d = %d\n",count++,max,min,n);

        }while(n!=495);
    }
    return 0;

}