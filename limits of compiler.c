#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short int signed: %hd to %hd",SHRT_MIN,SHRT_MAX);
	printf("\nshort int unsigned: %d to %hu",0,USHRT_MAX);
	
	printf("\nint signed: %d to %d",INT_MAX,INT_MIN);
	printf("\nint unsigned: %d to %u",0,UINT_MAX);
	
	printf("\nlong int signed: %ld to %ld",LONG_MIN,LONG_MAX);
	printf("\nlong int unsigned: %d to %lu",0,LONG_MAX);
	
	printf("\nlong long signed: %lld to %lld",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("\nlong long unsigned: %d to %llu",0,ULONG_LONG_MAX);
	
}
