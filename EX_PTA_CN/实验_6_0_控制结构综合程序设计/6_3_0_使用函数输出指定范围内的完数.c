#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int factorsum( int number )
{
    int i,sum=0;
    for(i=1;i<number;i++){
        if(number%i==0){
            sum=sum+i;
        }
    }
    if(sum==number)
    return sum;
    else return -1;
}
void PrintPN( int m, int n )
{
    int i,j,k,sum=0,flag=0;
    for(k=1;k<=n;k++)if(m<=n){
    for(i=1;i<m;i++){
            if(m%i==0){
                sum=sum+i;
            }
        }if(sum==m){
            flag=1;
                printf("%d = 1",m);
                for(j=2;j<m;j++){
                    if(m%j==0){
                        printf(" + %d",j);
                    }
                }
                printf("\n");
            }
            m+=1;
            sum=0;
    }
    if(flag==0){
        printf("No perfect number");
    }
}