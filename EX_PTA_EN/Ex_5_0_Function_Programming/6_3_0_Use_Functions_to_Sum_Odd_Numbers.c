#include <stdio.h>
#define MAXN 10

int even( int n );
int OddSum( int List[], int N );

int main()
{    
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for ( i=0; i<N; i++ ) {
        scanf("%d", &List[i]);
        if ( even(List[i])==0 )
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}

int even( int n )
{
    if(n%2==0){
        return 1;
    }else{
        return 0;
    }
}

int OddSum( int List[], int N )
{
    int i,s=0;
    for(i=0;i<N;i++){
        if(even(List[i])==0){
            s+=List[i];
        }
    }
    return s;
}


// int even( int n )
// {
//     int a;
//     a=(n+1)%2;
//     return a;
// }

// int OddSum( int List[], int N )
// {
//     int sum=0;
//     for(;N>=1;N--){
//         if(even(List[N-1])==0){
//             sum+=List[N-1];
//         }
//     }
//     return sum;
// }
