#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max=0,mid=0,min=0;
    if(a>b&&a>c&&b>c){                  //a=max,b=mid
        printf("%d->%d->%d",c,b,a);
    }else if(a>b&&a>c&&c>b){            //a=max,c=mid
        printf("%d->%d->%d",b,c,a);
    }else if(b>a&&b>c&&a>c){            //b=max,a=mid
        printf("%d->%d->%d",c,a,b);
    }else if(b>a&&b>c&&c>a){            //b=max,c=mid
        printf("%d->%d->%d",a,c,b);
    }else if(c>a&&c>b&&a>b){            //c=max,a=mid
        printf("%d->%d->%d",b,a,c);
    }else{                              //c=max,b=mid
        printf("%d->%d->%d",a,b,c);
    }
    return 0;

}