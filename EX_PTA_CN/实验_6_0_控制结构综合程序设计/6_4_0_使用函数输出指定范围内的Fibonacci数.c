#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib( int n )
{
        if(n==1){
        return 1;
    }else if(n==2){
        return 1;
    }else{
    int i,sum,x1=1,x2=1;
    for(i=3;i<=n;i++){
        sum=x1+x2;
        x1=x2;
        x2=sum;
    }
    return sum;
    }
}
void PrintFN( int m, int n )
{
    int i=1;
    int flag=1,count=0;
    while(fib(i)<m){
        i++;
    }
    while(fib(i)<=n){
        if(flag==1){
            printf("%d",fib(i));
            flag=0;
        }else{
            printf(" %d",fib(i));
        }
        i++;
        count=1;
    }
    if(count==0){
        printf("No Fibonacci number");
    }
}
// void PrintFN( int m, int n )
// {
//     int i=1,sum,x1=1,x2=1,flag=0;
//     while(fib(i)>=m&&fib(i)<2){
//         i++;
//         printf("1 ");
//     }
//     for(i=3;i<=n;i++){
//         sum=x1+x2;
//         x1=x2;
//         x2=sum;
//         if(x2>=m&&x2<=n){
//             if(flag==0){
//                 printf("%d",x2);
//                 flag=1;
//             }
//             if(flag==1){
//                 printf(" %d",x2);
//             }
//         }
//     }
//     if(flag==0){
//         printf("No Fibonacci number");
//     }    
// }