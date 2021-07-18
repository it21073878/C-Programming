// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>
int main(void) //main function
{
	int mark0 , mark[10]; //integer array
	int num;
	
	for(num=0 ; num<=9 ; ++num)
	{
		do
		{
		
		printf("Enter mark %d : " , num+1); //getting input for array
		scanf("%d" , &mark0);
		
		//marks should be between 0 to 20
		if(mark0 > 0 && mark0 < 20)
		{
			mark[num] = mark0;
		}
			
		else
		{
			printf("Invalid Marks! "); 
		}
		}
		while(mark0>20 || mark0 < 0);
			
	}
	
	printf("values stored in the array\n");
	
	for(num=0 ; num<=9 ; ++num)
	{
		printf("Mark %d is %d\n" , num+1 ,  mark[num]); //print values stored in the array
	}
	
	return 0;
}
