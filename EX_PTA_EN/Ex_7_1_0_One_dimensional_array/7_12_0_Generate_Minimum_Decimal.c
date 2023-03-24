#include <stdio.h>
int main()
{
    int a[11];
    int flag=0;
    int s=0;
    int c=0;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    while(s!=c){
        for(int i=0;i<10;i++){
            if(a[i]>0){
                if(flag==0){
                    if(i!=0){
                        printf("%d",i);
                        a[i]--;
                        flag=1;
                        c++;
                        break;
                    }
                }
                if(flag==1){
                    printf("%d",i);
                    a[i]--;
                    c++;
                    break;
                }
            }

        }
    }
    return 0;
}
