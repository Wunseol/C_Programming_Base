#include <stdio.h>
#include <stdlib.h>
struct shu
{
    int a1,a2,b1,b2;
    double s1,s2;
};
int main()
{
    struct shu stu;
    double sum1,sum2;
    scanf("%d/%d %d/%d",&stu.a1,&stu.b1,&stu.a2,&stu.b2);
    sum1=(stu.a1)*1.0/stu.b1;
    sum2=(stu.a2)*1.0/stu.b2;
    if(sum1>sum2){
        printf("%d/%d > %d/%d\n",stu.a1,stu.b1,stu.a2,stu.b2);
    }else if(sum1==sum2){
        printf("%d/%d = %d/%d\n",stu.a1,stu.b1,stu.a2,stu.b2);
    }else{
        printf("%d/%d < %d/%d\n",stu.a1,stu.b1,stu.a2,stu.b2);
    }
    return 0; 
}