#include <stdio.h>

void menu();//菜单

int main()
{

    int choice,i;
    double price;

    menu();

    for(i=0;i<5;i++){
        scanf("%d",&choice);
        if(choice==0){
            break;
        }
        switch(choice){
            case 1:price=3.00;break;
            case 2:price=2.50;break;
            case 3:price=4.10;break;
            case 4:price=10.20;break;
            default:price=0.00;break;
        }
        printf("price = %0.2lf\n",price);
    }
    return 0;
    
}

void menu()//菜单
{
    printf("[1] apple\n");
    printf("[2] pear\n");
    printf("[3] orange\n");
    printf("[4] grape\n");
    printf("[0] exit\n");
}