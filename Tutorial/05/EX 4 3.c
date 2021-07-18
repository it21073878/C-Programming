// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>

int main(void)
{
	int x,y;
	
	for(x=1; x<=7; x=x+1)
	{
		for(y=1; y<=x; y=y+1)
		{
			printf("*");
		}
	
		printf("\n");
	}
	
	int a,b;
	int z=7;
	
	/*for(a=4; a>=1; a=a-1)
	{
		for(b=1; b<=a; b=b+1)
		{
			printf("*");
		}
	
		printf("\n");
	}*/
	
	
/*	for(a=1; a<=4; a=a+1)
	{
		for(b=z; b>=1; b= b-1)
		{
			printf("*");
		}
	
		printf("\n");
		z=z-2;
	}*/
	return 0;
}
