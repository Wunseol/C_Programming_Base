#include <stdio.h>
int main()
{
    int a[20];
    int b[20];
    int c[40];
    int n1;
    int n2;
    int j;
    int num=0;
    int f=0;
    scanf("%d",&n1);

    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&n2);

    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }

    for(int i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                break;
            }
        }
        if(j==n2){
            c[num++]=a[i];
        }
    }

    for(int i=0;i<n2;i++){
        for(j=0;j<n1;j++){
            if(b[i]==a[j]){
                break;
            }
        }
        if(j==n1){
            c[num++]=b[i];
        }
    }
    f=0;
    for(int i=0;i<num;i++){
        for(j=0;j<i;j++){
            if(c[i]==c[j]){
                break;
            }
        }
        if(j==i){
            if(f!=0){
                printf(" ");
            }
            printf("%d",c[i]);
            f++;
        }
    }
    return 0;

}