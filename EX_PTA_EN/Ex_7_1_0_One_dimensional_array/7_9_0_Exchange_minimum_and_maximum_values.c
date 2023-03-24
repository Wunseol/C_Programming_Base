#include <stdio.h>
int main()
{
    int temp;
    int max;
    int n;
    int min;
    int k=0;
    int h=0;
    int a[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
            k=i;
        }
    }
    temp=a[k];
    a[k]=a[0];
    a[0]=temp;
    max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            h=i;
        }
    }
    temp=a[h];
    a[h]=a[n-1];
    a[n-1]=temp;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}