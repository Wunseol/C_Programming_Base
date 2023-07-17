#include <stdio.h>

int max(int a[], int m, int n)
{
    int mid, max1, max2;
    if(m==n){
        return a[m];
    }
    mid=(m+n)/2;
    max1=max(a, m, mid);
    max2=max(a, mid+1, n);
    
    return (max1>max2)? max1: max2;     // 比较max1和max2返回其中比较大的值

}

int min(int a[], int m, int n)
{
    int mid, min1, min2;
    if(m==n){
        return a[m];
    }
    mid=(m+n)/2;
    min1=min(a, m, mid);
    min2=min(a, mid+1, n);

    return (min1<min2)? min1: min2;     // 比较min1和min2返回其中比较小的值
}

int main()
{
    int n;
    int a[101] = {0};
    scanf("%d", &n);
    if(n>=2&&n<=100){
        for(int i=1; i <= n; i++){
            scanf("%d", &a[i]);
        }
        printf("max = %d \n", max(a, 1, n));
        printf("min = %d \n", min(a, 1, n));
    }else{
        printf("n输入错误!\n");
    }
    
    return 0;

}