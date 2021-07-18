// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>

int main(void)

{
	float radius, diameter, cir, area; //variables
	
	printf("Enter the radius : ");
	scanf("%f", &radius); //Input Radius
	
	printf("===================================== \n");
	
	//calculation
	diameter=radius * 2;
	cir= 2 * (22 / (float)7) * radius;
	area= (22.0 / 7) * radius * radius;
	
	//display
	printf("Diameter of the circle : %.2f\n",diameter);     //display Diameter
	printf("Circumference of the circle : %.2f\n",cir);    //display Cricumference
	printf("Area of the circle : %.2f\n",area);           //display Area
	
	
	
	return 0;
}

