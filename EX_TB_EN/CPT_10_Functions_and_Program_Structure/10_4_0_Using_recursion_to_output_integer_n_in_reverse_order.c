#include <stdio.h>

void reverse(int num);

int main()
{
    int n;
    scanf("%d", &n);
    reverse(n);
    
    return 0;

}

void reverse(int num)
{
    if(num <= 9){
        printf("%d", num);      // 递归出口
    }else{
        printf("%d", num%10);   
        reverse(num/10);        // 递归调用
    }

}