#include <stdio.h>
int main()
{
    int letter,blank,digit,other,n,i;
    char ch;
    letter=blank=digit=other=0;
    n=10;
    for(i=1;i<=n;i++){
        ch=getchar();
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
            letter++;
        }
        else if(ch==' '||ch=='\n'){
            blank++;
        }
        else if(ch>='0'&&ch<='9'){
            digit++;
        }
        else{
            other++;
        }
    }
    printf("letter = %d,blank = %d,digit = %d,other = %d",letter,blank,digit,other);
    return 0;
    
}