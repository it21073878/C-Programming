// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>
int main(void)  //main function
{
	int mark[10]; //integer array
	int num;  
	
	for(num=0 ; num<=9 ; ++num)
	{
		printf("Enter mark %d : " , num+1);  //getting input for array
		scanf("%d" , &mark[num]);
		
	}
	
	return 0; //end
}
