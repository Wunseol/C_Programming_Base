//本题要求编写程序，计算表达式 1 + 2 + 3 + ... + 100 的值。
#include <stdio.h>
int main()
{
	int i=0,sum=0;
	while(i<100)
	
	{
	i++;sum=sum+i;
	}
	printf("sum = %d",sum);
	
	return 0;
	
}
