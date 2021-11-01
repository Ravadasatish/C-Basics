#include<stdio.h>
void main()
{
   int a,b,s,d,p,q,r,t;
   scanf("%d%d",&a,&b);
   s=a+b;
   d=a-b;
   p=a*b;
   q=a/b;
   r=a%b;
   t=s+d+p+q+r;
   printf("sum of %d and %d is %d",a,b,s);
   printf("\ndifference of %d and %d is %d",a,b,d);
   printf("\nproduct of %d and  is %d",a,b,p);
   printf("\nQuotient when %d is divided by %d is %d",a,b,q);
   printf("\nRemainder when %d is divided by %d is %d",a,b,r);
   printf("\nsum of Arthimetic operations is %d",t);
         
}
