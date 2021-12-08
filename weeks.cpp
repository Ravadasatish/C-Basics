#include<stdio.h>
void main()
{
	int a;
	printf("enter your number from 1 to 7 ");
	scanf("%d",&a);
	if(a==1)
	printf("sunday");
	
	else if(a==2)
	printf("monday");
	
	else if(a==3)
	printf("tuesday");
	
	else if(a==4)
	printf("wednesday");
	
	else if(a==5)
	printf("thursday");
	
	else if(a==7)
	printf("saturday");
	
	else if(a>7 | a<1)
	printf("Invalid input");
	
	return 0;
	
}
