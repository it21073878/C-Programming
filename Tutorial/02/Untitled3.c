// Tharush Upamal Senasinghe - IT21073878 - GROUP-Y1S105.1

#include<stdio.h>

int main(void)
{
//exercise 03
	int mark1;
	int mark2;
	int total;
	float avg;
	
	printf("Enter Mark 1 = ");
	scanf("%d", &mark1); // input mark 1
	printf("Enter Mark 2 = ");
	scanf("%d", &mark2); // input mark 2
	

	total=mark1+mark2;
	printf("Total Marks= %d\n", total); // calculate the total of the marks and display
	avg= (float)total/2;
	printf("Average = %.2f\n",avg ); //calculate the average marks and display
	
	return 0;
		
}






