#include<stdio.h>
int main()
{
	int i=1,sum=0;
	do
	{
		printf("%d\n",i);
		sum=sum+i;
		i++;
	}while(i<=5);
	printf("The sum of above numbers=%d",sum);
	return 0;
}
