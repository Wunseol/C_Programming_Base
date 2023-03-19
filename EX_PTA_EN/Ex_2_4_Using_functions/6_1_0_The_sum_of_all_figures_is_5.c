// 本题要求实现两个函数：一个函数判断给定正整数的各位数字之和是否等于5；另一个函数统计给定区间内有多少个满足上述要求的整数，并计算这些整数的和。

// 函数is判断number的各位数字之和是否等于5，是则返回1，否则返回0。

// 函数count_sum利用函数is统计给定区间[a, b]内有多少个满足上述要求（即令is返回1）的整数，并计算这些整数的和。最后按照格式

// 输入样例：
// 104 999
// 输出样例：
// 104 is counted.
// count = 15, sum = 3720
//

#include <stdio.h>

int is(int number);
void count_sum(int a,int b);

int main()
{
    int a,b;

    scanf("%d %d",&a,&b);
    if(is(a)){
        printf("%d is counted.\n",a);
    }
    if(is(b)){
        printf("%d is counted.\n",b);
    }
    count_sum(a,b);
    return 0;
    
}

int is(int number)
{
    int n,s=0;
    while(number!=0){
        n=number%10;
        s=s+n;
        number/=10;
    }
    if(s==5){
        return 1;
    }else{
        return 0;
    }

}

void count_sum(int a,int b)
{
    int i,count=0,sum=0;
    for(i=a;i<=b;i++){
        if(is(i)){
            count++;
            sum=sum+i;
        }
    }
    printf("count = %d, sum = %d",count,sum);
}