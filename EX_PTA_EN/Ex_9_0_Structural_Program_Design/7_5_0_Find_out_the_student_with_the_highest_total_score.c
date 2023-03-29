#include <stdio.h>
struct student
{
    int num;
    char name[10];
    int math,english,computer;
}s[11];
int main()
{
    int i,n,max=0,sum,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %s %d %d %d",&s[i].num,&s[i].name,&s[i].math,&s[i].english,&s[i].computer);
    }
    for(i=0;i<n;i++){
        if(max<(sum=s[i].math+s[i].english+s[i].computer)){
            max=sum;
            flag=i;
        }
    }
    printf("%s %05d %d",s[flag].name,s[flag].num,max);
    return 0;

}