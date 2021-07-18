// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>
int main(void)  // main function
{
	int element[10]; //integer array
	int value , i ;
	
	for(i=0 ; i<10 ; i++)
	{
		printf("enter value for element %d : " , i);  //getting input for array
		scanf("%d" , &element[i]);
	}
	printf("-------------------------\n");
	printf("Element\tvalue\tHistogram\n"); // bar chart topics
	
	for(i=0 ; i<10 ; i++)
	{
		printf("%d\t%d\t" , i , element[i]);
		
		for(value = 1 ; value <= element[i] ; value++)  //print Histogram 
		{
			printf("*");  
		}
		printf("\n");
	}
	
	return 0; //end
}
