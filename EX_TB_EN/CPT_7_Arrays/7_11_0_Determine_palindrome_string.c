#include <stdio.h>
#define MAXLINE 80
int main()
{
    int i,k;
    char line[MAXLINE];
    printf("Enter a string:");
    k=0;
    while((line[k]=getchar())!='\n'){
        k++;
    }
    line[k]='\n';
    i=0;
    k-=1;
    while(i<k){
        if(line[i]!=line[k]){
            break;
        }
        i++;
        k--;
    }
    if(i>=k){
        printf("It is a palindrome\n");
    }else{
        printf("It is not a palindrome\n");
    }
    return 0;
}