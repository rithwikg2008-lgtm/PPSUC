#include<stdio.h>
int main()
{
	int a=5,b=3;
	int bitwise_result;
	++a;
	printf("After Unary++,a is:%d\n",a);
	bitwise_result=a&b;
	printf("bitwise & result:%d\n",bitwise_result);
	return 0;
}
