#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max=0,mid=0,mix=0;
    if(a>b&&a>c&&b>c){printf("%d->%d->%d",c,b,a);}//a=max,b=mid

    else if(a>b&&a>c&&c>b){printf("%d->%d->%d",b,c,a);}//a=max,c=mid

    else if(b>a&&b>c&&a>c){printf("%d->%d->%d",c,a,b);}//b=max,a=mid

    else if(b>a&&b>c&&c>a){printf("%d->%d->%d",a,c,b);}//b=max,c=mid

    else if(c>a&&c>b&&a>b){printf("%d->%d->%d",b,a,c);}//c=max,a=mid

    else {printf("%d->%d->%d",a,b,c);}//c=max,b=mid

    return 0;

}