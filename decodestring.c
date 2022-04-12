#include<stdio.h>
#include<string.h>
int main()
{
	int k,t;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
	int a,n,j;
	scanf("%d%d",&a,&n);
	char str[a+1];
	scanf("%s",str);
	
	for(j=n;j>0;j--)
	{
	char sub1[j+1],sub2[a-j+1];
	int i;
	for(i=0;i<j;i++)
	{
		sub1[i]=str[i];
		if(i==j-1) sub1[j]='\0';
	}
	strrev(sub1);
	for(i=j;i<a+1;i++)
	{
		sub2[i-j]=str[i];
	}
	
	strcpy(str,strcat(sub1,sub2));
    }
    printf("%s\n",str);
    }
}
