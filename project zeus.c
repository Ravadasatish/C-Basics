#include<stdio.h>
int main()
{
	int choice,ac,rc,ba;	
	int a,b;
	printf("enter a two numbers\n");
	scanf("%d%d",&a,&b);
	printf("enter your choice\n1.Arthimetic operator\n2.relational operator\n3.bitwise operator\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter your option:\n1.+\n2.-\n3.*\n4./\n5.%%\n");
			scanf("%d",&ac);
			switch(ac)
			{
				case 1:
					printf("%d + %d = %d",a,b,a+b);
					break;
				case 2:
					printf("%d - %d = %d",a,b,a-b);
					break;
				case 3:
					printf("%d * %d = %d",a,b,a*b);
					break;
				case 4:
					printf("%d / %d = %d",a,b,a/b);
					break;
				case 5:
					printf("%d %% %d = %d",a,b,a%b);
					break;
								
			}
			break;
		case 2:
			printf("enter your option\n1.<\n2.>\n3.<=\n4.>=\n5.==\n6.!=\n");
			scanf("%d",&rc);
			switch(rc)
			{
				case 1:
					printf("%d",a<b);
					break;
				case 2:
					printf("%d",a>b);
					break;
				case 3:
					printf("%d",a<=b);
					break;
				case 4:
					printf("%d",a>=b);
					break;
				case 5:
					printf("%d",a==b);
					break;
				case 6:
					printf("%d",a!=b);
					break;						
					
			}
			break;
		case 3:
			printf("enter your option\n1.&\n2.|\n3.^\n");
			scanf("%d",&ba);
			switch(ba)
			{
				case 1:
					printf("%d",a&b);
					break;
				case 2:
					printf("%d",a|b);
					break;
				case 3:
					printf("%d",a^b);
					break;		
			}
			
		    break;	
			
	}
}
