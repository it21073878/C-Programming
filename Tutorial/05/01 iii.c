// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>

int main(void)
{
	int num; //variables
	int count = 0;
	int sum = 0;
	float avg;
	
	//input number
	printf("Enter Number : ");
	scanf("%d", &num);
	
	while(num >= 0) //loop
	{
		count = count + 1;
		sum = num + sum;    //calculations
		avg = sum / (float)count;
		
		printf("Enter Number : ");
		scanf("%d", &num);
		
		
	}
	printf("SUM = %d\n", sum);  //outputs
	printf("AVG = %.2f\n", avg);
	
	return 0;
}
