#include <stdio.h>
int main()
{
    int h,m,s,n;
    scanf("%d:%d:%d",&h,&m,&s);
    scanf("%d",&n);
    s=s+n;
    if(s>=60){s%=60;m+=1;}
    if(m>=60){m=0;h+=1;}
    if(h==24){h=0;}
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int hh,mm,ss;
//     scanf("%d:%d:%d",&hh,&mm,&ss);
//     int n;
//     scanf("%d",&n);
//     ss=ss+n;
//     mm+=(ss-ss%60)>0,ss%=60;
//     hh+=(mm-mm%60)>0,mm%=60;
//     hh%=24;
//     printf("%02d:%02d:%02d",hh,mm,ss);
//     return 0;
// }