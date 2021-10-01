#include <stdio.h>
int main()
{
	int n=0;
	double s=0;
	scanf("%d",&n);
	
	while(n>0)
	
	{
		s=s+1.000000/n;
		n=n-1;
	}
	printf("sum = %lf",s);
	return 0;
	
}