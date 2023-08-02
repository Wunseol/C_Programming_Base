#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct sysuser{
    char username[20];
    char password[8];
};

void encrypt(char *pwd);

int main()
{
    FILE *fp;
    int i;
    struct sysuser su;
    if((fp=fopen("f12-2.txt","w"))==NULL){
        printf("File open error!\n");
        exit(0);
    }
    for(i=1; i<=5; i++){
        printf("Enter %d th sysuser (name password):",i);
        scanf("%s %s",su.username,su.password);
        encrypt(su.password);
        fprintf(fp,"%s %s \n",su.username,su.password);
    }
    if(fclose(fp)){
        printf("Can not close the file!\n");
        exit(0);
    }
    return 0;

}

void encrypt(char *pwd)
{
    int i;
    //与15(二进制码是00001111)异或，实现低四位取反，高四位保持不变.
    for(i=0; i<strlen(pwd); i++){
        pwd[i]=pwd[i]^15;
    }
}
