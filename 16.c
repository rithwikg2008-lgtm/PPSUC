#include<stdio.h>
int main()
{
	int a[5]={10,20,30,400,500};
	int sum=0;
	int i;
	printf("the array elements are....\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
		sum=sum+a[i];
	}
	printf("the sum of above elements are: %d",sum);
	return 0;
}
