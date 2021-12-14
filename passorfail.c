#include<stdio.h>
int main()
{
	int  eng,phy,mat,ch,cs,total,per;
	scanf("%d%d%d%d%d",&eng,&phy,&mat,&ch,&cs);
	total=eng+phy+mat+ch+cs;
	per=(total/500)*100;
	if(eng>=35 && phy>=35 && mat>=35 && ch>=35 && cs>=35)
	{
		printf("pass\n");
		if(per>90)
		{
			printf("grade A");
		}
		
			else if(per>80)
		{
			printf("grade B");
		}
		
			else if(per>70)
		{
			printf("grade C");
		}
		
			else if(per>60)
		{
			printf("grade D");
		}
		
			else if(per>50)
		{
			printf("grade E");
		}
		else
		{
			printf("grade F");
		}
		
	}
	
	else
	{
		printf("fail\n");
		if(eng<35)
		{
			printf("failed in english by %d",35-eng);
		}
		
		
		if(phy<35)
		{
			printf("failed in physics by %d",35-phy);
		}
		
		
		if(mat<35)
		{
			printf("failed in maths by %d",35-mat);
		}
		
		
		
		if(ch<35)
		{
			printf("failed in chemistry by %d",35-ch);
		}
		
		
		
		if(cs<35)
		{
			printf("failed in computer science by %d",35-cs);
		}
		
	}
	   
}
