#include <stdio.h>
#include <string.h>
#define N 81 
int main()
{
    char s[N],min[N];
    int i,n;
    scanf("%d",&n);
    getchar();
    gets(min);
    for(i=1;i<n;i++){
        gets(s);
        if(strcmp(s,min)<0)
        {
            strcpy(min,s);
        }
    }
    printf("Min is: %s\n",min);

}