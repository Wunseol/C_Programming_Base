#include <stdio.h>
int main()
{
    int my_number=38;
    int your_number;
    printf("Input your number:");
    scanf("%d",&your_number);
    if(your_number==my_number){
        printf("Good Guess!\n");

    }else if(your_number>my_number){
        printf("Too big!\n");
    }else{
        printf("Too small!");
    }
    return 0;
       
}