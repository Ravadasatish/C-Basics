#include<stdio.h>
void main()
{
	int n;
	printf("enter your number ");
	scanf("%d",&n);
	if(n == -(n))
	{
		printf("%d is negetive",n);
	}
	else
	{
		printf("%d is positive",n);
	}
}
