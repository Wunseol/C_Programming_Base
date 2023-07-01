#include <stdio.h>
int main()
{
    int cnt,word;
    char ch;
    word=cnt=0;
    printf("Input characters:");
    while((ch=getchar())!='\n'){
        if(ch==' '){
            word=0;
        }else if(word==0){
            word=1;
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
    
}