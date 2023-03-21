#include <stdio.h>
#include <math.h>

int main()
{
    int inputnumber,guessnumber;
    int count=0,n;
    int i;
    scanf("%d %d",&inputnumber,&n);
    for(i=1;i<=100;i++){
        scanf("%d",&guessnumber);
        count++;
        if(inputnumber<guessnumber&&count<=n){
            printf("Too big\n");
        }else if(inputnumber>guessnumber&&count<=n){
            if(guessnumber<0){
                printf("Game Over\n");
                break;
            }
            printf("Too small\n");
        }else{
            if(count==1){
                printf("Bingo!\n");
                break;
            }
            if(count<=3){
                printf("Lucky You!\n");
                break;                
            }
            if(count<=n){
                printf("Good Guess!\n");
                break;
            }

        }
        if(count>n){
            printf("Game Over\n");
            break;
        }
    }
    return 0;

}