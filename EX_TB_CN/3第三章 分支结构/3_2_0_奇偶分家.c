#include <stdio.h>
int main()
{
    int count_odd=0,count_even=0,i,n,number;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d number :",n);
    for(i=1;i<=n;i++){
        scanf("%d",&number);
        if(number%2!=0){
            count_odd++;
        }else{
            count_even++;
        }
    }
    printf("Odd:%d, Even:%d\n",count_odd,count_even);
    return 0;
}