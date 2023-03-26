#include <stdio.h>

int main()
{
    int n,count=0;

    char a[80];

    for(int i=0;i<80;i++){//输入字符
        scanf("%c",&a[i]);
        if(a[i]=='\n'){
            break;
        }
    }

    for(int i=0;i<80;i++){//统计大写辅音字母
        if(a[i]>='A'&&a[i]<='Z'){
            if(a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U'){
                count++;
            }
        }
        if(a[i]=='\n'){//回车退出
            break;
        }
    }

    printf("%d",count);
    return 0;

}