#include <stdio.h>
#include <math.h>
int main()
{
	int putinnumber1,guessnumber2;
	int count=0,n;
	int i;
	scanf("%d %d",&putinnumber1,&n);
	for(i=1;i<=100;i++){
		scanf("%d",&guessnumber2);
		count++;
		if(putinnumber1<guessnumber2&&count<=n){
			printf("Too big\n");
		}else if(putinnumber1>guessnumber2&&count<=n){
			if(guessnumber2<0){
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