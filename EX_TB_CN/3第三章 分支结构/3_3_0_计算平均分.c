#include <stdio.h>
int main()
{
    int count,i,n;
    double score,total;
    printf("Enter n:");
    scanf("%d",&n);
    total=0;
    count=0;
    for(i=1;i<=n;i++){
        printf("Enter score #%d:",i);
        scanf("%lf",&score);
        total=total+score;
        if(score<60){
            count++;
        }
    }
    if(n!=0){
        printf("Average=%.2f\n",total/n);
    }else{
        printf("Average=%.2f\n",0.0);
    }
    printf("Number of failures=%d\n",count);
    return 0;

}