#include <stdio.h>  

// # 车钥匙,编译预处理 include 包含，导入
// <stdio.h> 
// .h 是头文件，是.head
// stdio是 (standard 标准 input output 输入输出) ：标准输入输出的意思

int factorial(int n);

int main(void)
{
    int n;

    scanf("%d",&n);
    printf("%d\n",factorial(n));

    return 0;

}

//求阶乘
int factorial(int n)
{
    int i,fact=1;
  
    for( i = 1; i <= n; i++ ) {
        fact = fact * i;
    }
    return fact;

}