//����Ҫ���д����,�������� 1 - 1/4 + 1/7 - 1/10 + ... ��ǰN��֮�͡�
#include <stdio.h>
int main()
{
    int n,i;
    double s=1;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(i%2==0){s=s+1.0/(3*i+1);}
        else{s=s-1.0/(3*i+1);}
    }
    printf("sum = %.3lf",s);
    return 0;


}