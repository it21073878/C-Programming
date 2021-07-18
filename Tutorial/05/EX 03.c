// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>
	
int main(void)

{
	//variables
	int count = 1;
	int mark;
	int sum=0;
	int x = 1;
	int max = 0;
	int stdNo;
	
	while(x <= 3) //outtar loop
	{
		count = 1;
		sum = 0;
		while(count <= 4) //loop
		{
			printf("Enter Marks  :"); //inner output
			scanf("%d", &mark);
			
			//calculations
			count = count + 1; 
			sum = sum + mark;
		}
		
		printf("Total marks = %d\n\n", sum);
		if (sum > max)
			max = sum;
			stdNo = x;	
		x++;
	}
	printf(" Highest marks = %d , Student No = %d", max , stdNo);
	return 0; //end
}

