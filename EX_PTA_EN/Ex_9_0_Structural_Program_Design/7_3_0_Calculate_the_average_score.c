#include <stdio.h>
struct student{
    int num; 
    char name[10];
    double g;
}s[10];
int main()
{
    int i,n;
    double sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %s %lf",&s[i].num,&s[i].name,&s[i].g);
    }
    for(i=0;i<n;i++){
        sum=sum+s[i].g;
    }
    printf("%.2lf\n",sum*1.0/n);
    for(i=0;i<n;i++){
        if(s[i].g<sum/n){
            printf("%s %05d\n",s[i].name,s[i].num);
        }
    }
    return 0;
}