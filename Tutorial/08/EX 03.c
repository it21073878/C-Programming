// T.U.Senasinghe - IT21073878 - 2021 Batch - group 05.1.A

#include<stdio.h>
int main(void)  // main function
{
	int motion[5];   //integer array
	int i , x;
	
	for(i=0 ; i<5 ; i++)
	{
		printf("Enter value %d :" , i+1);  //getting input for array
		scanf("%d" , &motion[i]);	

	}
	printf("Initial values :");	
	for(i=0 ; i<5 ; i++)
	{
		 printf("%d\t" , motion[i]);	

	}
	printf("\nAfter rotating :");
		
	//manipulate data in array
	x= motion[0];
	for(i=0 ; i<4 ; i++)
	{
		motion[i] = motion[i+1];
    }
    motion[4] = x;
    
    //print values in array
    for(i=0 ; i<5 ; i++)	
    printf("%d\t" , motion[i]);
    
	return 0;  //end
}
