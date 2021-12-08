#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter your numbers ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("%d is the largest",a);
	}
	
	else if(b>a && b>c && b>d)
	{
		printf("%d is the largest",b);	
	}
	
	
	else if(c>a && c>b && c>d)
	{
		printf("%d is the largest",c);	
	}
	
	
	else if(d>a && d>b && d>c)
	{
		printf("%d is the largest",d);	
	}
}
