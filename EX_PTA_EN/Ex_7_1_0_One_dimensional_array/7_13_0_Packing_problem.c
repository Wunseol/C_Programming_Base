#include <stdio.h>
int main()
{
    int a[1000];
    int b[1000];
    int n;
    int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=100;
    }
    for(int i;i<n;i++){
        for(int j=0;j<n;j++){
            if(b[j]-a[i]>=0){
                b[j]-=a[i];
                printf("%d %d\n",a[i],j+1);
                if(count<j+1){
                    count=j+1;
                }
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}