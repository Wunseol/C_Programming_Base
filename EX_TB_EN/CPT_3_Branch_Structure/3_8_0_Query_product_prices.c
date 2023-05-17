#include <stdio.h>
int main()
{
    int choice,i;
    double price;
    printf("[1] Select crisps(薯片)\n");
    printf("[2] Select popcorn(爆米花)\n");
    printf("[3] Select chocolate(巧克力)\n");
    printf("[4] Select cola(可乐)\n");
    printf("[0] exit\n");
    for(i=1;i<=5;i++){
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==0){
            break;
        }
        switch(choice){
            case 1:price=3.0;break;
            case 2:price=2.5;break;
            case 3:price=4.0;break;
            case 4:price=3.5;break;
            default:price=0.0;break;
        }
        printf("price=%.01f\n",price);
    }
    printf("Thanks\n");
    return 0;  
}