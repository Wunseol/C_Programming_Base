#include <stdio.h>
int main()
{
    int i,h,n;
    double s=0,h2=0,k=2;
    scanf("%d %d",&h,&n);
    if(n==0){
        printf("%.1lf %.1lf",s,h2);
    }else if(n>0){
        s=h;
        for(i=1;i<=n;i++){
            s=s+2*h2;
            h2=h/k;
            k=k*2;
        }
        printf("%.1lf %.1lf",s,h2);
    }
    return 0;

}
