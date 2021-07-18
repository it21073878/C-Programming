// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>
//structure 
struct marks{
	int mod1, mod2, mod3, mod4;
}
std1, std2, std3;
//main	
int main(void)
{
	int count = 1; //variables
	int stdNo = 1;
	int sum1 , sum2, sum3 ,sum4;
	int max = 0;
	
	while(count<=3) //loop
	{
		printf("No : %d\n", stdNo);
		
		if(stdNo == 1)
		{
			printf("Enter Marks For module 1 :");
			scanf("%d", &std1.mod1);
			printf("Enter Marks For module 2 :");
			scanf("%d", &std1.mod2);
			printf("Enter Marks For module 3 :");
			scanf("%d", &std1.mod3);
			printf("Enter Marks For module 4 :");
			scanf("%d", &std1.mod4);
			sum1 = std1.mod1 + std1.mod2 + std1.mod3 + std1.mod4;
			printf("Total marks of Student 1 = %d\n\n", sum1);
		}
		else if (stdNo == 2)
		{
			printf("Enter Marks For module 1 :");
			scanf("%d", &std2.mod1);
			printf("Enter Marks For module 2 :");
			scanf("%d", &std2.mod2);
			printf("Enter Marks For module 3 :");
			scanf("%d", &std2.mod3);
			printf("Enter Marks For module 4 :");
			scanf("%d", &std2.mod4);
			sum2 = std2.mod1 + std2.mod2 + std2.mod3 + std2.mod4;
			printf("Total marks of Student 2 = %d\n\n", sum2);
		}
		else if(stdNo == 3)
		{
			printf("Enter Marks For module 1 :");
			scanf("%d", &std3.mod1);
			printf("Enter Marks For module 2 :");
			scanf("%d", &std3.mod2);
			printf("Enter Marks For module 3 :");
			scanf("%d", &std3.mod3);
			printf("Enter Marks For module 4 :");
			scanf("%d", &std3.mod4);
			sum3 = std3.mod1 + std3.mod2 + std3.mod3 + std3.mod4;
			printf("Total marks of Student 3 = %d\n\n", sum3);
		}
		else 
		{	
		}
		
		count = count + 1;
		stdNo = stdNo +1;
	
	}
	
	if(sum1>sum2 && sum1>sum3)
	{
		printf("Student 1 is the Highest  - score = %d", sum1);
	}
	else if(sum2>sum3 && sum2>sum1)
	{
		printf("Student 2 is the Highest  - score = %d", sum2);
	}
	else if(sum3>sum1 && sum3>sum2)
	{
		printf("Student 3 is the Highest  - score = %d", sum3);
	}
	else
	{
	}
	return 0;  
}
