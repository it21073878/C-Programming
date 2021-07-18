// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>
//Exercise 01
int main(void)
{
	
	int num; //variables
	
	printf("Enter a number : ");    
	scanf("%d", &num);	//input number
	
	//selection (if...else)
	if( num >= 0)
	{
		printf(" Number is : %d", num);	 //display
	}
	else
	{   
		num = -1 * num;    				  //convert negetive number to positive number
		printf("Number is : %d", num); 	 //display
		
	}
	return 0;
	
}
















