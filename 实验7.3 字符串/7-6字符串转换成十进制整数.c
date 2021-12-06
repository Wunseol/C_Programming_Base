#include <stdio.h>
int main()
{
    char a;
    int flag=1,mark=0,sum=0;
    scanf("%c",&a);
    while(a!='#'){
        if(a>='0'&&a<='9'){
            flag=0;
            sum=sum*16+a-'0';
        }else if(a>='a'&&a<='f'){
            flag=0;
            sum=sum*16+a-'a'+10;
        }else if(a>='A'&&a<='F'){
            flag=0;
            sum=sum*16+a-'A'+10;
        }else if(a=='-'&&flag==1){
            mark=1;
        }
        scanf("%c",&a);
    }
    if(sum==0){
        printf("0");
    }else{
        if(mark==1){
            printf("-");
        }
        printf("%d\n",sum);
    }
    return 0;
}