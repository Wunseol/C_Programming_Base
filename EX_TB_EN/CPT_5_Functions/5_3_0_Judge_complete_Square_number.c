#include <stdio.h>
int IsSquare(int n);
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    if(IsSquare(n)==1){
        printf("Is a complete Square number(����ȫƽ����)");
    }else{
        printf("Not a complete Square number(������ȫƽ����)");
    }
    return 0;

}

int IsSquare(int n)
{
    int i;
    for(i=1;n>0;i=i+2){
        n-=i;
    }
    if(n==0){
        return 1;
    }else{
        return 0;
    }
}