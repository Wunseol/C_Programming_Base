#include <stdio.h>
int main()
{
    int  i,n;
    double s=0,a,b;
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        a=i;
        b=2*i-1;
        if(i%2==0){s=s-a/b;}
        else{s=s+a/b;}

    }
    printf("%.3lf",s);
    return 0;

}