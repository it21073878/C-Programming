#include<stdio.h>
#include<math.h> //math Function
int main(void)
{
	float x;  //variabls
	
	x = floor(7.5);  //floor value
	printf("%.2f\n" , x);
	
	x = ceil(0.0);  //ceil value
	printf("%.2f\n" , x);
	
 	x = ceil(-6.4);  //ceil value
 	printf("%.2f\n" , x);
 	
	x = log10(100.0); // log value
	printf("%.2f\n" , x);
	
	x = ceil(floor (-5.5));  // ceil and floor
	printf("%.2f\n" , x);
	
	return 0;
}

