#include <stdio.h>

int main()
{
    int n,count=0;

    char a[80];

    for(int i=0;i<80;i++){//�����ַ�
        scanf("%c",&a[i]);
        if(a[i]=='\n'){
            break;
        }
    }

    for(int i=0;i<80;i++){//ͳ�ƴ�д������ĸ
        if(a[i]>='A'&&a[i]<='Z'){
            if(a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U'){
                count++;
            }
        }
        if(a[i]=='\n'){//�س��˳�
            break;
        }
    }

    printf("%d",count);
    return 0;

}