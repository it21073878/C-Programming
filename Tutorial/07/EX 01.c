// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>
#include<assert.h>

int qualityPoints(float avg);  
int main (void)
{
	float average;  // variables
	int ans;
	
	//assert statement to debug functions - boundary values
	assert(qualityPoints(60) == 0);
	assert(qualityPoints(69) == 1);
	assert(qualityPoints(79) == 2);
	assert(qualityPoints(89) == 3);
	assert(qualityPoints(100) == 4);
	//assert statement to debug functions - middle values
	assert(qualityPoints(55) == 0);
	assert(qualityPoints(65) == 1);
	assert(qualityPoints(75) == 2);
	assert(qualityPoints(85) == 3);
	assert(qualityPoints(95) == 4);
	
	
	printf("Enter Student Average :");  //getting Input
	scanf(" %f" , &average);
	
	ans = qualityPoints(average);  //function calling
	
	printf(" %d" , ans); //output
	
	
	return 0;
}

int qualityPoints(float avg) // function Implementation
{
	int answer;
	
	if(avg <= 60.0)
		answer = 0;
	else if(avg <= 69.0)
		answer = 1;
	else if(avg <= 79.0)
		answer = 2;
	else if(avg <= 89.0)
		answer = 3;		
	else if(avg <= 100.0)
		answer = 4;
	else
		answer = 0;
	
	return answer;
	
}
