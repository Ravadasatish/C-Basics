#include<stdio.h>
#include<math.h>
int main()
{
	int a,r,sum=0,x;
	scanf("%d",&a);
	x=a;
	// for counting dgits
	int c=0,y=a;
	while(y>0)
	{
		y=y/10;
		c=c+1;
		
	}
	while(x>0)
	{
		r=x%10;
		sum=sum+pow(r,c);
		x=x/10;
		
	}
printf("%d\n",sum);
if (a==sum)
{
	printf("%d is an ARMSTRONG NUMBER",a);
}
else
{
	printf("%d in not an ARMSTRONG NUMBER");
}
return 0;

}

