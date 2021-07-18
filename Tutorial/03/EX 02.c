

#include<stdio.h>

int main(void)
{
	//variables
	int num;
	int digit1, digit2, digit3, digit4, digit5;
	int div1, div2 ,div3,div4, div5;
	//Input Number
	printf("Enter a 5 digit Number : ");
	scanf_s("%d",&num);
	
	//Calculation
	digit1= num%10; 
	div1= num/10; // remanin Intiger value 01
	
	digit2= div1%10;
	div2= num/100; // remanin Intiger value 02
	
	digit3= div2%10;
	div3= num/1000; // remanin Intiger value 03
	
	digit4= div3%10;
	div4= num/10000; // remanin Intiger value 04
	
	digit5= div4%10;
	div5= num/100000; // remanin Intiger value 05
	
	//Display
	printf("---------------------------------\n");
	printf("%d \t ", digit5);
	printf("%d \t ", digit4);
	printf("%d \t ", digit3);
	printf("%d \t ", digit2);
	printf("%d \t ", digit1);
	
	return 0; //end
}
