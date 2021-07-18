// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>
float circleArea( float radius); // pre_defined_Function
int main(void)  //main_Function
{
	float radius , area;  //Variables in main Function
	printf("Enter Radius : ");
	scanf("%f" , &radius);
	
	area = circleArea(radius);  //Function calling
	printf("Area of the circle : %.2f" , area);
	return 0;
}
float circleArea( float radius)  
{ 
	float area;   //Variables in circleArea Function
	area = (22.0 / 7) * radius * radius;  //Calculation
	return area;
}

