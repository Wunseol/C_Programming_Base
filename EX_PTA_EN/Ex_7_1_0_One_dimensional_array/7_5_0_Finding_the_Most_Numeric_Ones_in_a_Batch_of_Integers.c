#include <stdio.h>
int main()
{
    int n;//����ĸ���n;3
    int number[10]={0};
    int max=0;
    int a;//����;1234 2345 3456
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        
        scanf("%d",&a);
        if(a==0){
            number[0]++;
        }
        while(a>0){//ÿλȡ��
            number[a%10]++;
            a/=10;
        }
    }
    for(int i=0;i<10;i++){
        if(max<number[i]){
            max=number[i];
        }
    }
    printf("%d:",max);
    for(int i=0;i<10;i++){
        if(max==number[i]){
            printf(" %d",i);
        }
    }
    return 0;

}