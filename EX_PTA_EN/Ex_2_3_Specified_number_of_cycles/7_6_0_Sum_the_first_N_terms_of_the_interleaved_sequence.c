// 本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。
// 输入样例:
// 5
// 输出样例:
// 0.917
#include <stdio.h>
int main()
{
    int i,n;
    double sum=0,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=i;
        b=2*i-1;
        if(i%2==0){
            sum=sum-a/b;
        }else{
            sum=sum+a/b;
        }
    }
    printf("%.3lf",sum);
    return 0;

}