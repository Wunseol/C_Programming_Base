#include <stdio.h>
int main()
{
    int a[4],b,c,i,j,n,v=0;
    scanf("%d",&n);
    for(i=0;i<4;i++){
        a[i]=n%10;
        n/=10;
    }
    for(i=0;i<4;i++){
        a[i]=(a[i]+9)%10;
    }
    b=a[0];
    a[0]=a[2];
    a[2]=b;
    b=a[1];
    a[1]=a[3];
    a[3]=b;
    v=a[3]*1000+a[2]*100+a[1]*10+a[0]*1;
    if(a[3]==0&&a[2]!=0){
        printf("The encrypted number is 0%d",v);
        }else if(a[2]==0&&a[3]==0&&a[1]!=0){
            printf("The encrypted number is 00%d",v);
        }else if(a[1]==0&&a[3]==0&&a[2]==0){
            printf("The encrypted number is 000%d",v);
        }else if(a[3]==0&&a[2]==0&&a[1]==0&&a[0]==0){
            printf("The encrypted number is 000%d",v);
        }else if(a[3]!=0){
            printf("The encrypted number is %d",v);
        } 
    return 0;
    
}