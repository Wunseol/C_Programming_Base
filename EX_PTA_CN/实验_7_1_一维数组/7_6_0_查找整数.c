#include <stdio.h>
int main()
{
    int i,n,a,flag=1,out;

    scanf("%d",&n);
    scanf("%d",&a);

    int number[n];
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    for(i=0;i<n;i++){
        if(a==number[i]){
            out=i;
            flag=0;
        }
    }
    if(flag==0){
        printf("%d",out);
    }else{
        printf("Not Found");
    }
    return 0;
}