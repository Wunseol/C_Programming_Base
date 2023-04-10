#include <stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	if(n<=2000||n>2100){
		printf("Invalid year!");
	}else if(n>=2000&&n<=2003){
		printf("None");
	}else{
		for(i=2003;i<=n;i++){
			if(i%4==0&&i%100!=0&&i%400!=0){
				printf("%d\n",i);
			}
		}
	}
	return 0;
}