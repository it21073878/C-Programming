// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>
float add(float no1 , float no2);  //add function
float multiply(int no1 , int no2);  // multiply function
float square(float no);  // square function
int main(void)
{
	// variables
	int num1 = 3; 
	int num2 = 4;
	int num3 = 5; 
	int num4 = 7;
	float Add , multiply1 , multiply2 , Square;  
	
	//Function calling
	multiply1 = multiply(num1 , num2);
	multiply2 = multiply(num3 , num4);
	Add = add(multiply1, multiply2);
	Square = square(Add);
	//final Output
	printf("Answer : %.2f" , Square);
	return 0;
}
//Function Implementation
float multiply(int no1 , int no2)  
{
	float multiply;
	multiply = no1 * no2;
	return multiply;
}
float add(float no1 , float no2)
{
	float add;
	add = no1 + no2;
	return add;
}
float square(float no)
{
	float square;
	square = no * no;
	return square;
}
