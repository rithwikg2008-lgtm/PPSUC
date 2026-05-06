#include<stdio.h>
int main()
{
	int num;
	float f;
	char ch;
	char str[100];
	
	scanf("%d",&num);
	scanf("%f",&f);
	scanf("%c",&ch);
	scanf("%s",str);
	
	printf("integer: %d\n",num);
	printf("float: %.2f\n",f);
	printf("character: %c\n",ch);
	printf("string: %s\n",str);
	return 0;
}
