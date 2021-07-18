// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A
#include<stdio.h>
int main(void)
{ 
	//variables
	float num1 , num2;
	char oprt;
	float ans;
	//geting inputs from user
	printf("Enter Number 1 - ");
	scanf("%f" , &num1 );
	
	printf("operator - ");
	scanf("%s" , &oprt );
	
	printf("Enter Number 2 - ");
	scanf("%f" , &num2 );
	 
	//if condition
	if (oprt == '+')
	{
		ans = num1 + num2;  // + operator
		printf("Answer = %.2f", ans );
		
	}
	else if (oprt == '-')  // - operator
	{
		ans = num1 + num2;
		printf("Answer = %.2f", ans );
		
	}
	else if (oprt == '*')
	{
		ans = num1 * num2;  // * operator
		printf("Answer = %.2f", ans );
		
	}
	else if (oprt == '/')
	{
		ans = num1 / num2; //  operator
		printf("Answer = %.2f", ans);
		
	}
	else 
	{
		printf("Error");
	}
	
	return 0;
}
