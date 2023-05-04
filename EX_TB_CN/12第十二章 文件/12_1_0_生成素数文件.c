#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int prime(int n);
int main()
{
    int n = 2, count = 0;
    FILE *fp;
    if((fp = fopen("prime.txt","w"))==NULL){
        printf("File open error!\n");
        exit(0);
    }while(count<500){
        if(prime(n)!=0){
            count++;
            fprintf(fp,"%d ", n);
        }
        n++;
    }
    if(fclose(fp)){
        printf("Can not close the file!");
        exit(0);
    }
    return 0;

}

// Р§зг5-5
int prime(int m)
{
    int i,limit;
    if(m<=1){
        return 0;
    }else if(m==2){
        return 1;
    }else{
        limit=sqrt(m)+1;
        for(i=2;i<=limit;i++){
            if(m%i==0){
                return 0;
            }
        }
        return 1;
    }
}