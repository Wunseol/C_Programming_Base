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