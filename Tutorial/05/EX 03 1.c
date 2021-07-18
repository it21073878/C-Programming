// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>
	
int main(void)

{
	//variables
	int count = 1;
	int mark;
	int sum=0;
	while(count<=4) //loop
	{
		printf("Enter Mark  :"); //output
		scanf("%d", &mark);
		count = count + 1; 
		sum = sum + mark;
	}
	printf("Total marks = %d", sum);
	return 0; //end
}

