#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,j;
    char a[5][81],tp[81];
    for(i=0;i<5;i++){
        scanf("%s",a[i]);
    }
    for(j=0;j<5;j++){
        for(i=0;i<5;i++){
            if(strcmp(a[i],a[j])>0){
                strcpy(tp,a[j]);
                strcpy(a[j],a[i]);
                strcpy(a[i],tp);
            }
        }
    }
    printf("After sorted:\n");
    for(i=0;i<5;i++){
        printf("%s\n",a[i]);
    }
    return 0;
}